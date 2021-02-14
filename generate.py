#!/usr/bin/python3
# This file is part of volk library; see volk.h for version/license details

from collections import OrderedDict
import sys
import urllib
import xml.etree.ElementTree as etree
import urllib.request


def parse_xml(path):
    file = urllib.request.urlopen(path) if path.startswith(
        "http") else open(path, 'r')
    with file:
        tree = etree.parse(file)
        return tree


def patch_file(path, blocks):
    result = []
    block = None

    with open(path, 'r') as file:
        for line in file.readlines():
            if block:
                if line == block:
                    result.append(line)
                    block = None
            else:
                result.append(line)
                # C comment marker
                if line.strip().startswith('/* VOLK_GENERATE_'):
                    block = line
                    result.append(blocks[line.strip()[17:-3]])
                # Shell/CMake comment marker
                elif line.strip().startswith('# VOLK_GENERATE_'):
                    block = line
                    result.append(blocks[line.strip()[16:]])

    with open(path, 'w') as file:
        for line in result:
            file.write(line)


def is_descendant_type(types, name, base):
    if name == base:
        return True
    type = types.get(name)
    if not type:
        return False
    parents = type.get('parent')
    if not parents:
        return False
    return any([is_descendant_type(types, parent, base) for parent in parents.split(',')])


def defined(key):
    return 'defined(' + key + ')'


def get_param_declare(param):
    ty = param.find('type')
    name = param.find('name')
    return ((param.text or '') + ty.text + (ty.tail or ' ') + name.text + (name.tail or '')).strip()


def cpp_method(cmd):
    args = [(get_param_declare(a), a.findtext('name'))
            for a in cmd.findall('param')]
    print(args)
    ret_val = cmd.findtext('proto/type')
    print(ret_val)
    name = cmd.findtext('proto/name')
    print(name)

    first_arg_type = cmd.findtext('param[1]/type')
    if first_arg_type == 'VkDevice':
        declare = ', '.join([a[0] for a in args[1:]])
        call = ', '.join(['_device'] + [a[1] for a in args[1:]])
    else:
        declare = ', '.join([a[0] for a in args])
        call = ', '.join([a[1] for a in args])

    body = f"_table.{name}({call});"

    return f'\t\tinline {ret_val} {name[2:]}({declare}) const {{\n\t\t\t{body}\n\t\t}}\n'


if __name__ == "__main__":
    specpath = "https://raw.githubusercontent.com/KhronosGroup/Vulkan-Docs/main/xml/vk.xml"

    if len(sys.argv) > 1:
        specpath = sys.argv[1]

    spec = parse_xml(specpath)

    block_keys = ('DEVICE_TABLE', 'PROTOTYPES_H', 'PROTOTYPES_C', 'LOAD_LOADER',
                  'LOAD_INSTANCE', 'LOAD_DEVICE', 'LOAD_DEVICE_TABLE', 'DEVICE_METHOD_HPP')

    blocks = {}

    version = spec.find('types/type[name="VK_HEADER_VERSION"]')
    blocks['VERSION'] = version.find('name').tail.strip() + '\n'
    blocks['VERSION_DEFINE'] = '#define VOLK_HEADER_VERSION ' + \
        version.find('name').tail.strip() + '\n'

    command_groups = OrderedDict()
    instance_commands = set()

    for feature in spec.findall('feature'):
        key = defined(feature.get('name'))
        cmdrefs = feature.findall('require/command')
        command_groups[key] = [cmdref.get('name') for cmdref in cmdrefs]

    for ext in sorted(spec.findall('extensions/extension'), key=lambda ext: ext.get('name')):
        supported = ext.get('supported')
        if supported == 'disabled':
            continue
        name = ext.get('name')
        type = ext.get('type')
        for req in ext.findall('require'):
            key = defined(name)
            if req.get('feature'):
                key += ' && ' + defined(req.get('feature'))
            if req.get('extension'):
                key += ' && ' + defined(req.get('extension'))
            cmdrefs = req.findall('command')
            command_groups.setdefault(key, []).extend(
                [cmdref.get('name') for cmdref in cmdrefs])
            if type == 'instance':
                for cmdref in cmdrefs:
                    instance_commands.add(cmdref.get('name'))

    commands_to_groups = OrderedDict()

    for (group, cmdnames) in command_groups.items():
        for name in cmdnames:
            commands_to_groups.setdefault(name, []).append(group)

    for (group, cmdnames) in command_groups.items():
        command_groups[group] = [
            name for name in cmdnames if len(commands_to_groups[name]) == 1]

    for (name, groups) in commands_to_groups.items():
        if len(groups) == 1:
            continue
        key = ' || '.join(['(' + g + ')' for g in groups])
        command_groups.setdefault(key, []).append(name)

    commands = {}

    for cmd in spec.findall('commands/command'):
        if not cmd.get('alias'):
            name = cmd.findtext('proto/name')
            commands[name] = cmd

    for cmd in spec.findall('commands/command'):
        if cmd.get('alias'):
            name = cmd.get('name')
            commands[name] = commands[cmd.get('alias')]

    types = {}

    for type in spec.findall('types/type'):
        name = type.findtext('name')
        if name:
            types[name] = type

    for key in block_keys:
        blocks[key] = ''

    for (group, cmdnames) in command_groups.items():
        ifdef = '#if ' + group + '\n'

        for key in block_keys:
            blocks[key] += ifdef

        for name in sorted(cmdnames):
            cmd = commands[name]
            type = cmd.findtext('param[1]/type')
            if name == 'vkGetInstanceProcAddr':
                type = ''
            if name == 'vkGetDeviceProcAddr':
                type = 'VkInstance'

            if is_descendant_type(types, type, 'VkDevice') and name not in instance_commands:
                blocks['LOAD_DEVICE'] += '\t' + name + \
                    ' = (PFN_' + name + ')load(context, "' + name + '");\n'
                blocks['DEVICE_TABLE'] += '\tPFN_' + name + ' ' + name + ';\n'
                blocks['LOAD_DEVICE_TABLE'] += '\ttable->' + name + \
                    ' = (PFN_' + name + ')load(context, "' + name + '");\n'
                blocks['DEVICE_METHOD_HPP'] += cpp_method(cmd)
            elif is_descendant_type(types, type, 'VkInstance'):
                blocks['LOAD_INSTANCE'] += '\t' + name + \
                    ' = (PFN_' + name + ')load(context, "' + name + '");\n'
            elif type != '':
                blocks['LOAD_LOADER'] += '\t' + name + \
                    ' = (PFN_' + name + ')load(context, "' + name + '");\n'

            blocks['PROTOTYPES_H'] += 'extern PFN_' + name + ' ' + name + ';\n'
            blocks['PROTOTYPES_C'] += 'PFN_' + name + ' ' + name + ';\n'

        for key in block_keys:
            if blocks[key].endswith(ifdef):
                blocks[key] = blocks[key][:-len(ifdef)]
            else:
                blocks[key] += '#endif /* ' + group + ' */\n'

    patch_file('volk.h', blocks)
    patch_file('volk.hpp', blocks)
    patch_file('volk.c', blocks)
    patch_file('CMakeLists.txt', blocks)
