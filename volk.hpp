#ifndef VOLK_HPP_
#define VOLK_HPP_

#include "volk.h"

#ifndef VOLK_NAMESPACE
#define VOLK_NAMESPACE volk
#endif

namespace VOLK_NAMESPACE
{
    class Device
    {
    public:
        Device(VkDevice device) : _device(device)
        {
            volkLoadDeviceTable(&_table, device);
        }

        /* VOLK_GENERATE_DEVICE_METHOD_HPP */
#if defined(VK_VERSION_1_0)
        inline VkResult AllocateCommandBuffers(const VkCommandBufferAllocateInfo *pAllocateInfo, VkCommandBuffer *pCommandBuffers) const
        {
            return _table.vkAllocateCommandBuffers(_device, pAllocateInfo, pCommandBuffers);
        }
        inline VkResult AllocateDescriptorSets(const VkDescriptorSetAllocateInfo *pAllocateInfo, VkDescriptorSet *pDescriptorSets) const
        {
            return _table.vkAllocateDescriptorSets(_device, pAllocateInfo, pDescriptorSets);
        }
        inline VkResult AllocateMemory(const VkMemoryAllocateInfo *pAllocateInfo, const VkAllocationCallbacks *pAllocator, VkDeviceMemory *pMemory) const
        {
            return _table.vkAllocateMemory(_device, pAllocateInfo, pAllocator, pMemory);
        }
        inline VkResult BeginCommandBuffer(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo *pBeginInfo) const
        {
            return _table.vkBeginCommandBuffer(commandBuffer, pBeginInfo);
        }
        inline VkResult BindBufferMemory(VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset) const
        {
            return _table.vkBindBufferMemory(_device, buffer, memory, memoryOffset);
        }
        inline VkResult BindImageMemory(VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset) const
        {
            return _table.vkBindImageMemory(_device, image, memory, memoryOffset);
        }
        inline void CmdBeginQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags) const
        {
            _table.vkCmdBeginQuery(commandBuffer, queryPool, query, flags);
        }
        inline void CmdBeginRenderPass(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo *pRenderPassBegin, VkSubpassContents contents) const
        {
            _table.vkCmdBeginRenderPass(commandBuffer, pRenderPassBegin, contents);
        }
        inline void CmdBindDescriptorSets(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet *pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t *pDynamicOffsets) const
        {
            _table.vkCmdBindDescriptorSets(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets);
        }
        inline void CmdBindIndexBuffer(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType) const
        {
            _table.vkCmdBindIndexBuffer(commandBuffer, buffer, offset, indexType);
        }
        inline void CmdBindPipeline(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) const
        {
            _table.vkCmdBindPipeline(commandBuffer, pipelineBindPoint, pipeline);
        }
        inline void CmdBindVertexBuffers(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer *pBuffers, const VkDeviceSize *pOffsets) const
        {
            _table.vkCmdBindVertexBuffers(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets);
        }
        inline void CmdBlitImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit *pRegions, VkFilter filter) const
        {
            _table.vkCmdBlitImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter);
        }
        inline void CmdClearAttachments(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment *pAttachments, uint32_t rectCount, const VkClearRect *pRects) const
        {
            _table.vkCmdClearAttachments(commandBuffer, attachmentCount, pAttachments, rectCount, pRects);
        }
        inline void CmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue *pColor, uint32_t rangeCount, const VkImageSubresourceRange *pRanges) const
        {
            _table.vkCmdClearColorImage(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges);
        }
        inline void CmdClearDepthStencilImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue *pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange *pRanges) const
        {
            _table.vkCmdClearDepthStencilImage(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges);
        }
        inline void CmdCopyBuffer(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy *pRegions) const
        {
            _table.vkCmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions);
        }
        inline void CmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy *pRegions) const
        {
            _table.vkCmdCopyBufferToImage(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions);
        }
        inline void CmdCopyImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy *pRegions) const
        {
            _table.vkCmdCopyImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
        }
        inline void CmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy *pRegions) const
        {
            _table.vkCmdCopyImageToBuffer(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions);
        }
        inline void CmdCopyQueryPoolResults(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags) const
        {
            _table.vkCmdCopyQueryPoolResults(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags);
        }
        inline void CmdDispatch(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) const
        {
            _table.vkCmdDispatch(commandBuffer, groupCountX, groupCountY, groupCountZ);
        }
        inline void CmdDispatchIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset) const
        {
            _table.vkCmdDispatchIndirect(commandBuffer, buffer, offset);
        }
        inline void CmdDraw(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) const
        {
            _table.vkCmdDraw(commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance);
        }
        inline void CmdDrawIndexed(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance) const
        {
            _table.vkCmdDrawIndexed(commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);
        }
        inline void CmdDrawIndexedIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) const
        {
            _table.vkCmdDrawIndexedIndirect(commandBuffer, buffer, offset, drawCount, stride);
        }
        inline void CmdDrawIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) const
        {
            _table.vkCmdDrawIndirect(commandBuffer, buffer, offset, drawCount, stride);
        }
        inline void CmdEndQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query) const
        {
            _table.vkCmdEndQuery(commandBuffer, queryPool, query);
        }
        inline void CmdEndRenderPass(VkCommandBuffer commandBuffer) const
        {
            _table.vkCmdEndRenderPass(commandBuffer);
        }
        inline void CmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer *pCommandBuffers) const
        {
            _table.vkCmdExecuteCommands(commandBuffer, commandBufferCount, pCommandBuffers);
        }
        inline void CmdFillBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data) const
        {
            _table.vkCmdFillBuffer(commandBuffer, dstBuffer, dstOffset, size, data);
        }
        inline void CmdNextSubpass(VkCommandBuffer commandBuffer, VkSubpassContents contents) const
        {
            _table.vkCmdNextSubpass(commandBuffer, contents);
        }
        inline void CmdPipelineBarrier(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier *pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier *pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier *pImageMemoryBarriers) const
        {
            _table.vkCmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
        }
        inline void CmdPushConstants(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void *pValues) const
        {
            _table.vkCmdPushConstants(commandBuffer, layout, stageFlags, offset, size, pValues);
        }
        inline void CmdResetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) const
        {
            _table.vkCmdResetEvent(commandBuffer, event, stageMask);
        }
        inline void CmdResetQueryPool(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) const
        {
            _table.vkCmdResetQueryPool(commandBuffer, queryPool, firstQuery, queryCount);
        }
        inline void CmdResolveImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve *pRegions) const
        {
            _table.vkCmdResolveImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
        }
        inline void CmdSetBlendConstants(VkCommandBuffer commandBuffer, const float blendConstants[4]) const
        {
            _table.vkCmdSetBlendConstants(commandBuffer, blendConstants);
        }
        inline void CmdSetDepthBias(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor) const
        {
            _table.vkCmdSetDepthBias(commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);
        }
        inline void CmdSetDepthBounds(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds) const
        {
            _table.vkCmdSetDepthBounds(commandBuffer, minDepthBounds, maxDepthBounds);
        }
        inline void CmdSetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) const
        {
            _table.vkCmdSetEvent(commandBuffer, event, stageMask);
        }
        inline void CmdSetLineWidth(VkCommandBuffer commandBuffer, float lineWidth) const
        {
            _table.vkCmdSetLineWidth(commandBuffer, lineWidth);
        }
        inline void CmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D *pScissors) const
        {
            _table.vkCmdSetScissor(commandBuffer, firstScissor, scissorCount, pScissors);
        }
        inline void CmdSetStencilCompareMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask) const
        {
            _table.vkCmdSetStencilCompareMask(commandBuffer, faceMask, compareMask);
        }
        inline void CmdSetStencilReference(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference) const
        {
            _table.vkCmdSetStencilReference(commandBuffer, faceMask, reference);
        }
        inline void CmdSetStencilWriteMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask) const
        {
            _table.vkCmdSetStencilWriteMask(commandBuffer, faceMask, writeMask);
        }
        inline void CmdSetViewport(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport *pViewports) const
        {
            _table.vkCmdSetViewport(commandBuffer, firstViewport, viewportCount, pViewports);
        }
        inline void CmdUpdateBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void *pData) const
        {
            _table.vkCmdUpdateBuffer(commandBuffer, dstBuffer, dstOffset, dataSize, pData);
        }
        inline void CmdWaitEvents(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent *pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier *pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier *pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier *pImageMemoryBarriers) const
        {
            _table.vkCmdWaitEvents(commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
        }
        inline void CmdWriteTimestamp(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query) const
        {
            _table.vkCmdWriteTimestamp(commandBuffer, pipelineStage, queryPool, query);
        }
        inline VkResult CreateBuffer(const VkBufferCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkBuffer *pBuffer) const
        {
            return _table.vkCreateBuffer(_device, pCreateInfo, pAllocator, pBuffer);
        }
        inline VkResult CreateBufferView(const VkBufferViewCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkBufferView *pView) const
        {
            return _table.vkCreateBufferView(_device, pCreateInfo, pAllocator, pView);
        }
        inline VkResult CreateCommandPool(const VkCommandPoolCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkCommandPool *pCommandPool) const
        {
            return _table.vkCreateCommandPool(_device, pCreateInfo, pAllocator, pCommandPool);
        }
        inline VkResult CreateComputePipelines(VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo *pCreateInfos, const VkAllocationCallbacks *pAllocator, VkPipeline *pPipelines) const
        {
            return _table.vkCreateComputePipelines(_device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
        }
        inline VkResult CreateDescriptorPool(const VkDescriptorPoolCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkDescriptorPool *pDescriptorPool) const
        {
            return _table.vkCreateDescriptorPool(_device, pCreateInfo, pAllocator, pDescriptorPool);
        }
        inline VkResult CreateDescriptorSetLayout(const VkDescriptorSetLayoutCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkDescriptorSetLayout *pSetLayout) const
        {
            return _table.vkCreateDescriptorSetLayout(_device, pCreateInfo, pAllocator, pSetLayout);
        }
        inline VkResult CreateEvent(const VkEventCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkEvent *pEvent) const
        {
            return _table.vkCreateEvent(_device, pCreateInfo, pAllocator, pEvent);
        }
        inline VkResult CreateFence(const VkFenceCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkFence *pFence) const
        {
            return _table.vkCreateFence(_device, pCreateInfo, pAllocator, pFence);
        }
        inline VkResult CreateFramebuffer(const VkFramebufferCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkFramebuffer *pFramebuffer) const
        {
            return _table.vkCreateFramebuffer(_device, pCreateInfo, pAllocator, pFramebuffer);
        }
        inline VkResult CreateGraphicsPipelines(VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo *pCreateInfos, const VkAllocationCallbacks *pAllocator, VkPipeline *pPipelines) const
        {
            return _table.vkCreateGraphicsPipelines(_device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
        }
        inline VkResult CreateImage(const VkImageCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkImage *pImage) const
        {
            return _table.vkCreateImage(_device, pCreateInfo, pAllocator, pImage);
        }
        inline VkResult CreateImageView(const VkImageViewCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkImageView *pView) const
        {
            return _table.vkCreateImageView(_device, pCreateInfo, pAllocator, pView);
        }
        inline VkResult CreatePipelineCache(const VkPipelineCacheCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkPipelineCache *pPipelineCache) const
        {
            return _table.vkCreatePipelineCache(_device, pCreateInfo, pAllocator, pPipelineCache);
        }
        inline VkResult CreatePipelineLayout(const VkPipelineLayoutCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkPipelineLayout *pPipelineLayout) const
        {
            return _table.vkCreatePipelineLayout(_device, pCreateInfo, pAllocator, pPipelineLayout);
        }
        inline VkResult CreateQueryPool(const VkQueryPoolCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkQueryPool *pQueryPool) const
        {
            return _table.vkCreateQueryPool(_device, pCreateInfo, pAllocator, pQueryPool);
        }
        inline VkResult CreateRenderPass(const VkRenderPassCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkRenderPass *pRenderPass) const
        {
            return _table.vkCreateRenderPass(_device, pCreateInfo, pAllocator, pRenderPass);
        }
        inline VkResult CreateSampler(const VkSamplerCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkSampler *pSampler) const
        {
            return _table.vkCreateSampler(_device, pCreateInfo, pAllocator, pSampler);
        }
        inline VkResult CreateSemaphore(const VkSemaphoreCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkSemaphore *pSemaphore) const
        {
            return _table.vkCreateSemaphore(_device, pCreateInfo, pAllocator, pSemaphore);
        }
        inline VkResult CreateShaderModule(const VkShaderModuleCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkShaderModule *pShaderModule) const
        {
            return _table.vkCreateShaderModule(_device, pCreateInfo, pAllocator, pShaderModule);
        }
        inline void DestroyBuffer(VkBuffer buffer, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyBuffer(_device, buffer, pAllocator);
        }
        inline void DestroyBufferView(VkBufferView bufferView, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyBufferView(_device, bufferView, pAllocator);
        }
        inline void DestroyCommandPool(VkCommandPool commandPool, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyCommandPool(_device, commandPool, pAllocator);
        }
        inline void DestroyDescriptorPool(VkDescriptorPool descriptorPool, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyDescriptorPool(_device, descriptorPool, pAllocator);
        }
        inline void DestroyDescriptorSetLayout(VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyDescriptorSetLayout(_device, descriptorSetLayout, pAllocator);
        }
        inline void DestroyDevice(const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyDevice(_device, pAllocator);
        }
        inline void DestroyEvent(VkEvent event, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyEvent(_device, event, pAllocator);
        }
        inline void DestroyFence(VkFence fence, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyFence(_device, fence, pAllocator);
        }
        inline void DestroyFramebuffer(VkFramebuffer framebuffer, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyFramebuffer(_device, framebuffer, pAllocator);
        }
        inline void DestroyImage(VkImage image, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyImage(_device, image, pAllocator);
        }
        inline void DestroyImageView(VkImageView imageView, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyImageView(_device, imageView, pAllocator);
        }
        inline void DestroyPipeline(VkPipeline pipeline, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyPipeline(_device, pipeline, pAllocator);
        }
        inline void DestroyPipelineCache(VkPipelineCache pipelineCache, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyPipelineCache(_device, pipelineCache, pAllocator);
        }
        inline void DestroyPipelineLayout(VkPipelineLayout pipelineLayout, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyPipelineLayout(_device, pipelineLayout, pAllocator);
        }
        inline void DestroyQueryPool(VkQueryPool queryPool, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyQueryPool(_device, queryPool, pAllocator);
        }
        inline void DestroyRenderPass(VkRenderPass renderPass, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyRenderPass(_device, renderPass, pAllocator);
        }
        inline void DestroySampler(VkSampler sampler, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroySampler(_device, sampler, pAllocator);
        }
        inline void DestroySemaphore(VkSemaphore semaphore, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroySemaphore(_device, semaphore, pAllocator);
        }
        inline void DestroyShaderModule(VkShaderModule shaderModule, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyShaderModule(_device, shaderModule, pAllocator);
        }
        inline VkResult DeviceWaitIdle() const
        {
            return _table.vkDeviceWaitIdle(_device);
        }
        inline VkResult EndCommandBuffer(VkCommandBuffer commandBuffer) const
        {
            return _table.vkEndCommandBuffer(commandBuffer);
        }
        inline VkResult FlushMappedMemoryRanges(uint32_t memoryRangeCount, const VkMappedMemoryRange *pMemoryRanges) const
        {
            return _table.vkFlushMappedMemoryRanges(_device, memoryRangeCount, pMemoryRanges);
        }
        inline void FreeCommandBuffers(VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer *pCommandBuffers) const
        {
            _table.vkFreeCommandBuffers(_device, commandPool, commandBufferCount, pCommandBuffers);
        }
        inline VkResult FreeDescriptorSets(VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSet *pDescriptorSets) const
        {
            return _table.vkFreeDescriptorSets(_device, descriptorPool, descriptorSetCount, pDescriptorSets);
        }
        inline void FreeMemory(VkDeviceMemory memory, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkFreeMemory(_device, memory, pAllocator);
        }
        inline void GetBufferMemoryRequirements(VkBuffer buffer, VkMemoryRequirements *pMemoryRequirements) const
        {
            _table.vkGetBufferMemoryRequirements(_device, buffer, pMemoryRequirements);
        }
        inline void GetDeviceMemoryCommitment(VkDeviceMemory memory, VkDeviceSize *pCommittedMemoryInBytes) const
        {
            _table.vkGetDeviceMemoryCommitment(_device, memory, pCommittedMemoryInBytes);
        }
        inline void GetDeviceQueue(uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue *pQueue) const
        {
            _table.vkGetDeviceQueue(_device, queueFamilyIndex, queueIndex, pQueue);
        }
        inline VkResult GetEventStatus(VkEvent event) const
        {
            return _table.vkGetEventStatus(_device, event);
        }
        inline VkResult GetFenceStatus(VkFence fence) const
        {
            return _table.vkGetFenceStatus(_device, fence);
        }
        inline void GetImageMemoryRequirements(VkImage image, VkMemoryRequirements *pMemoryRequirements) const
        {
            _table.vkGetImageMemoryRequirements(_device, image, pMemoryRequirements);
        }
        inline void GetImageSparseMemoryRequirements(VkImage image, uint32_t *pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements *pSparseMemoryRequirements) const
        {
            _table.vkGetImageSparseMemoryRequirements(_device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
        }
        inline void GetImageSubresourceLayout(VkImage image, const VkImageSubresource *pSubresource, VkSubresourceLayout *pLayout) const
        {
            _table.vkGetImageSubresourceLayout(_device, image, pSubresource, pLayout);
        }
        inline VkResult GetPipelineCacheData(VkPipelineCache pipelineCache, size_t *pDataSize, void *pData) const
        {
            return _table.vkGetPipelineCacheData(_device, pipelineCache, pDataSize, pData);
        }
        inline VkResult GetQueryPoolResults(VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void *pData, VkDeviceSize stride, VkQueryResultFlags flags) const
        {
            return _table.vkGetQueryPoolResults(_device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags);
        }
        inline void GetRenderAreaGranularity(VkRenderPass renderPass, VkExtent2D *pGranularity) const
        {
            _table.vkGetRenderAreaGranularity(_device, renderPass, pGranularity);
        }
        inline VkResult InvalidateMappedMemoryRanges(uint32_t memoryRangeCount, const VkMappedMemoryRange *pMemoryRanges) const
        {
            return _table.vkInvalidateMappedMemoryRanges(_device, memoryRangeCount, pMemoryRanges);
        }
        inline VkResult MapMemory(VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void **ppData) const
        {
            return _table.vkMapMemory(_device, memory, offset, size, flags, ppData);
        }
        inline VkResult MergePipelineCaches(VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache *pSrcCaches) const
        {
            return _table.vkMergePipelineCaches(_device, dstCache, srcCacheCount, pSrcCaches);
        }
        inline VkResult QueueBindSparse(VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo *pBindInfo, VkFence fence) const
        {
            return _table.vkQueueBindSparse(queue, bindInfoCount, pBindInfo, fence);
        }
        inline VkResult QueueSubmit(VkQueue queue, uint32_t submitCount, const VkSubmitInfo *pSubmits, VkFence fence) const
        {
            return _table.vkQueueSubmit(queue, submitCount, pSubmits, fence);
        }
        inline VkResult QueueWaitIdle(VkQueue queue) const
        {
            return _table.vkQueueWaitIdle(queue);
        }
        inline VkResult ResetCommandBuffer(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags) const
        {
            return _table.vkResetCommandBuffer(commandBuffer, flags);
        }
        inline VkResult ResetCommandPool(VkCommandPool commandPool, VkCommandPoolResetFlags flags) const
        {
            return _table.vkResetCommandPool(_device, commandPool, flags);
        }
        inline VkResult ResetDescriptorPool(VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags) const
        {
            return _table.vkResetDescriptorPool(_device, descriptorPool, flags);
        }
        inline VkResult ResetEvent(VkEvent event) const
        {
            return _table.vkResetEvent(_device, event);
        }
        inline VkResult ResetFences(uint32_t fenceCount, const VkFence *pFences) const
        {
            return _table.vkResetFences(_device, fenceCount, pFences);
        }
        inline VkResult SetEvent(VkEvent event) const
        {
            return _table.vkSetEvent(_device, event);
        }
        inline void UnmapMemory(VkDeviceMemory memory) const
        {
            _table.vkUnmapMemory(_device, memory);
        }
        inline void UpdateDescriptorSets(uint32_t descriptorWriteCount, const VkWriteDescriptorSet *pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet *pDescriptorCopies) const
        {
            _table.vkUpdateDescriptorSets(_device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies);
        }
        inline VkResult WaitForFences(uint32_t fenceCount, const VkFence *pFences, VkBool32 waitAll, uint64_t timeout) const
        {
            return _table.vkWaitForFences(_device, fenceCount, pFences, waitAll, timeout);
        }
#endif /* defined(VK_VERSION_1_0) */
#if defined(VK_VERSION_1_1)
        inline VkResult BindBufferMemory2(uint32_t bindInfoCount, const VkBindBufferMemoryInfo *pBindInfos) const
        {
            return _table.vkBindBufferMemory2(_device, bindInfoCount, pBindInfos);
        }
        inline VkResult BindImageMemory2(uint32_t bindInfoCount, const VkBindImageMemoryInfo *pBindInfos) const
        {
            return _table.vkBindImageMemory2(_device, bindInfoCount, pBindInfos);
        }
        inline void CmdDispatchBase(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) const
        {
            _table.vkCmdDispatchBase(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
        }
        inline void CmdSetDeviceMask(VkCommandBuffer commandBuffer, uint32_t deviceMask) const
        {
            _table.vkCmdSetDeviceMask(commandBuffer, deviceMask);
        }
        inline VkResult CreateDescriptorUpdateTemplate(const VkDescriptorUpdateTemplateCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkDescriptorUpdateTemplate *pDescriptorUpdateTemplate) const
        {
            return _table.vkCreateDescriptorUpdateTemplate(_device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
        }
        inline VkResult CreateSamplerYcbcrConversion(const VkSamplerYcbcrConversionCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkSamplerYcbcrConversion *pYcbcrConversion) const
        {
            return _table.vkCreateSamplerYcbcrConversion(_device, pCreateInfo, pAllocator, pYcbcrConversion);
        }
        inline void DestroyDescriptorUpdateTemplate(VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyDescriptorUpdateTemplate(_device, descriptorUpdateTemplate, pAllocator);
        }
        inline void DestroySamplerYcbcrConversion(VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroySamplerYcbcrConversion(_device, ycbcrConversion, pAllocator);
        }
        inline void GetBufferMemoryRequirements2(const VkBufferMemoryRequirementsInfo2 *pInfo, VkMemoryRequirements2 *pMemoryRequirements) const
        {
            _table.vkGetBufferMemoryRequirements2(_device, pInfo, pMemoryRequirements);
        }
        inline void GetDescriptorSetLayoutSupport(const VkDescriptorSetLayoutCreateInfo *pCreateInfo, VkDescriptorSetLayoutSupport *pSupport) const
        {
            _table.vkGetDescriptorSetLayoutSupport(_device, pCreateInfo, pSupport);
        }
        inline void GetDeviceGroupPeerMemoryFeatures(uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags *pPeerMemoryFeatures) const
        {
            _table.vkGetDeviceGroupPeerMemoryFeatures(_device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
        }
        inline void GetDeviceQueue2(const VkDeviceQueueInfo2 *pQueueInfo, VkQueue *pQueue) const
        {
            _table.vkGetDeviceQueue2(_device, pQueueInfo, pQueue);
        }
        inline void GetImageMemoryRequirements2(const VkImageMemoryRequirementsInfo2 *pInfo, VkMemoryRequirements2 *pMemoryRequirements) const
        {
            _table.vkGetImageMemoryRequirements2(_device, pInfo, pMemoryRequirements);
        }
        inline void GetImageSparseMemoryRequirements2(const VkImageSparseMemoryRequirementsInfo2 *pInfo, uint32_t *pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 *pSparseMemoryRequirements) const
        {
            _table.vkGetImageSparseMemoryRequirements2(_device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
        }
        inline void TrimCommandPool(VkCommandPool commandPool, VkCommandPoolTrimFlags flags) const
        {
            _table.vkTrimCommandPool(_device, commandPool, flags);
        }
        inline void UpdateDescriptorSetWithTemplate(VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void *pData) const
        {
            _table.vkUpdateDescriptorSetWithTemplate(_device, descriptorSet, descriptorUpdateTemplate, pData);
        }
#endif /* defined(VK_VERSION_1_1) */
#if defined(VK_VERSION_1_2)
        inline void CmdBeginRenderPass2(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo *pRenderPassBegin, const VkSubpassBeginInfo *pSubpassBeginInfo) const
        {
            _table.vkCmdBeginRenderPass2(commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
        }
        inline void CmdDrawIndexedIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) const
        {
            _table.vkCmdDrawIndexedIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
        }
        inline void CmdDrawIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) const
        {
            _table.vkCmdDrawIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
        }
        inline void CmdEndRenderPass2(VkCommandBuffer commandBuffer, const VkSubpassEndInfo *pSubpassEndInfo) const
        {
            _table.vkCmdEndRenderPass2(commandBuffer, pSubpassEndInfo);
        }
        inline void CmdNextSubpass2(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo *pSubpassBeginInfo, const VkSubpassEndInfo *pSubpassEndInfo) const
        {
            _table.vkCmdNextSubpass2(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
        }
        inline VkResult CreateRenderPass2(const VkRenderPassCreateInfo2 *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkRenderPass *pRenderPass) const
        {
            return _table.vkCreateRenderPass2(_device, pCreateInfo, pAllocator, pRenderPass);
        }
        inline VkDeviceAddress GetBufferDeviceAddress(const VkBufferDeviceAddressInfo *pInfo) const
        {
            return _table.vkGetBufferDeviceAddress(_device, pInfo);
        }
        inline uint64_t GetBufferOpaqueCaptureAddress(const VkBufferDeviceAddressInfo *pInfo) const
        {
            return _table.vkGetBufferOpaqueCaptureAddress(_device, pInfo);
        }
        inline uint64_t GetDeviceMemoryOpaqueCaptureAddress(const VkDeviceMemoryOpaqueCaptureAddressInfo *pInfo) const
        {
            return _table.vkGetDeviceMemoryOpaqueCaptureAddress(_device, pInfo);
        }
        inline VkResult GetSemaphoreCounterValue(VkSemaphore semaphore, uint64_t *pValue) const
        {
            return _table.vkGetSemaphoreCounterValue(_device, semaphore, pValue);
        }
        inline void ResetQueryPool(VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) const
        {
            _table.vkResetQueryPool(_device, queryPool, firstQuery, queryCount);
        }
        inline VkResult SignalSemaphore(const VkSemaphoreSignalInfo *pSignalInfo) const
        {
            return _table.vkSignalSemaphore(_device, pSignalInfo);
        }
        inline VkResult WaitSemaphores(const VkSemaphoreWaitInfo *pWaitInfo, uint64_t timeout) const
        {
            return _table.vkWaitSemaphores(_device, pWaitInfo, timeout);
        }
#endif /* defined(VK_VERSION_1_2) */
#if defined(VK_AMD_buffer_marker)
        inline void CmdWriteBufferMarkerAMD(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) const
        {
            _table.vkCmdWriteBufferMarkerAMD(commandBuffer, pipelineStage, dstBuffer, dstOffset, marker);
        }
#endif /* defined(VK_AMD_buffer_marker) */
#if defined(VK_AMD_display_native_hdr)
        inline void SetLocalDimmingAMD(VkSwapchainKHR swapChain, VkBool32 localDimmingEnable) const
        {
            _table.vkSetLocalDimmingAMD(_device, swapChain, localDimmingEnable);
        }
#endif /* defined(VK_AMD_display_native_hdr) */
#if defined(VK_AMD_draw_indirect_count)
        inline void CmdDrawIndexedIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) const
        {
            _table.vkCmdDrawIndexedIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
        }
        inline void CmdDrawIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) const
        {
            _table.vkCmdDrawIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
        }
#endif /* defined(VK_AMD_draw_indirect_count) */
#if defined(VK_AMD_shader_info)
        inline VkResult GetShaderInfoAMD(VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD infoType, size_t *pInfoSize, void *pInfo) const
        {
            return _table.vkGetShaderInfoAMD(_device, pipeline, shaderStage, infoType, pInfoSize, pInfo);
        }
#endif /* defined(VK_AMD_shader_info) */
#if defined(VK_ANDROID_external_memory_android_hardware_buffer)
        inline VkResult GetAndroidHardwareBufferPropertiesANDROID(const struct AHardwareBuffer *buffer, VkAndroidHardwareBufferPropertiesANDROID *pProperties) const
        {
            return _table.vkGetAndroidHardwareBufferPropertiesANDROID(_device, buffer, pProperties);
        }
        inline VkResult GetMemoryAndroidHardwareBufferANDROID(const VkMemoryGetAndroidHardwareBufferInfoANDROID *pInfo, struct AHardwareBuffer **pBuffer) const
        {
            return _table.vkGetMemoryAndroidHardwareBufferANDROID(_device, pInfo, pBuffer);
        }
#endif /* defined(VK_ANDROID_external_memory_android_hardware_buffer) */
#if defined(VK_EXT_buffer_device_address)
        inline VkDeviceAddress GetBufferDeviceAddressEXT(const VkBufferDeviceAddressInfo *pInfo) const
        {
            return _table.vkGetBufferDeviceAddressEXT(_device, pInfo);
        }
#endif /* defined(VK_EXT_buffer_device_address) */
#if defined(VK_EXT_calibrated_timestamps)
        inline VkResult GetCalibratedTimestampsEXT(uint32_t timestampCount, const VkCalibratedTimestampInfoEXT *pTimestampInfos, uint64_t *pTimestamps, uint64_t *pMaxDeviation) const
        {
            return _table.vkGetCalibratedTimestampsEXT(_device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
        }
#endif /* defined(VK_EXT_calibrated_timestamps) */
#if defined(VK_EXT_conditional_rendering)
        inline void CmdBeginConditionalRenderingEXT(VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT *pConditionalRenderingBegin) const
        {
            _table.vkCmdBeginConditionalRenderingEXT(commandBuffer, pConditionalRenderingBegin);
        }
        inline void CmdEndConditionalRenderingEXT(VkCommandBuffer commandBuffer) const
        {
            _table.vkCmdEndConditionalRenderingEXT(commandBuffer);
        }
#endif /* defined(VK_EXT_conditional_rendering) */
#if defined(VK_EXT_debug_marker)
        inline void CmdDebugMarkerBeginEXT(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT *pMarkerInfo) const
        {
            _table.vkCmdDebugMarkerBeginEXT(commandBuffer, pMarkerInfo);
        }
        inline void CmdDebugMarkerEndEXT(VkCommandBuffer commandBuffer) const
        {
            _table.vkCmdDebugMarkerEndEXT(commandBuffer);
        }
        inline void CmdDebugMarkerInsertEXT(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT *pMarkerInfo) const
        {
            _table.vkCmdDebugMarkerInsertEXT(commandBuffer, pMarkerInfo);
        }
        inline VkResult DebugMarkerSetObjectNameEXT(const VkDebugMarkerObjectNameInfoEXT *pNameInfo) const
        {
            return _table.vkDebugMarkerSetObjectNameEXT(_device, pNameInfo);
        }
        inline VkResult DebugMarkerSetObjectTagEXT(const VkDebugMarkerObjectTagInfoEXT *pTagInfo) const
        {
            return _table.vkDebugMarkerSetObjectTagEXT(_device, pTagInfo);
        }
#endif /* defined(VK_EXT_debug_marker) */
#if defined(VK_EXT_discard_rectangles)
        inline void CmdSetDiscardRectangleEXT(VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D *pDiscardRectangles) const
        {
            _table.vkCmdSetDiscardRectangleEXT(commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);
        }
#endif /* defined(VK_EXT_discard_rectangles) */
#if defined(VK_EXT_display_control)
        inline VkResult DisplayPowerControlEXT(VkDisplayKHR display, const VkDisplayPowerInfoEXT *pDisplayPowerInfo) const
        {
            return _table.vkDisplayPowerControlEXT(_device, display, pDisplayPowerInfo);
        }
        inline VkResult GetSwapchainCounterEXT(VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t *pCounterValue) const
        {
            return _table.vkGetSwapchainCounterEXT(_device, swapchain, counter, pCounterValue);
        }
        inline VkResult RegisterDeviceEventEXT(const VkDeviceEventInfoEXT *pDeviceEventInfo, const VkAllocationCallbacks *pAllocator, VkFence *pFence) const
        {
            return _table.vkRegisterDeviceEventEXT(_device, pDeviceEventInfo, pAllocator, pFence);
        }
        inline VkResult RegisterDisplayEventEXT(VkDisplayKHR display, const VkDisplayEventInfoEXT *pDisplayEventInfo, const VkAllocationCallbacks *pAllocator, VkFence *pFence) const
        {
            return _table.vkRegisterDisplayEventEXT(_device, display, pDisplayEventInfo, pAllocator, pFence);
        }
#endif /* defined(VK_EXT_display_control) */
#if defined(VK_EXT_extended_dynamic_state)
        inline void CmdBindVertexBuffers2EXT(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer *pBuffers, const VkDeviceSize *pOffsets, const VkDeviceSize *pSizes, const VkDeviceSize *pStrides) const
        {
            _table.vkCmdBindVertexBuffers2EXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
        }
        inline void CmdSetCullModeEXT(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode) const
        {
            _table.vkCmdSetCullModeEXT(commandBuffer, cullMode);
        }
        inline void CmdSetDepthBoundsTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable) const
        {
            _table.vkCmdSetDepthBoundsTestEnableEXT(commandBuffer, depthBoundsTestEnable);
        }
        inline void CmdSetDepthCompareOpEXT(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp) const
        {
            _table.vkCmdSetDepthCompareOpEXT(commandBuffer, depthCompareOp);
        }
        inline void CmdSetDepthTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable) const
        {
            _table.vkCmdSetDepthTestEnableEXT(commandBuffer, depthTestEnable);
        }
        inline void CmdSetDepthWriteEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable) const
        {
            _table.vkCmdSetDepthWriteEnableEXT(commandBuffer, depthWriteEnable);
        }
        inline void CmdSetFrontFaceEXT(VkCommandBuffer commandBuffer, VkFrontFace frontFace) const
        {
            _table.vkCmdSetFrontFaceEXT(commandBuffer, frontFace);
        }
        inline void CmdSetPrimitiveTopologyEXT(VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology) const
        {
            _table.vkCmdSetPrimitiveTopologyEXT(commandBuffer, primitiveTopology);
        }
        inline void CmdSetScissorWithCountEXT(VkCommandBuffer commandBuffer, uint32_t scissorCount, const VkRect2D *pScissors) const
        {
            _table.vkCmdSetScissorWithCountEXT(commandBuffer, scissorCount, pScissors);
        }
        inline void CmdSetStencilOpEXT(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp) const
        {
            _table.vkCmdSetStencilOpEXT(commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
        }
        inline void CmdSetStencilTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable) const
        {
            _table.vkCmdSetStencilTestEnableEXT(commandBuffer, stencilTestEnable);
        }
        inline void CmdSetViewportWithCountEXT(VkCommandBuffer commandBuffer, uint32_t viewportCount, const VkViewport *pViewports) const
        {
            _table.vkCmdSetViewportWithCountEXT(commandBuffer, viewportCount, pViewports);
        }
#endif /* defined(VK_EXT_extended_dynamic_state) */
#if defined(VK_EXT_external_memory_host)
        inline VkResult GetMemoryHostPointerPropertiesEXT(VkExternalMemoryHandleTypeFlagBits handleType, const void *pHostPointer, VkMemoryHostPointerPropertiesEXT *pMemoryHostPointerProperties) const
        {
            return _table.vkGetMemoryHostPointerPropertiesEXT(_device, handleType, pHostPointer, pMemoryHostPointerProperties);
        }
#endif /* defined(VK_EXT_external_memory_host) */
#if defined(VK_EXT_full_screen_exclusive)
        inline VkResult AcquireFullScreenExclusiveModeEXT(VkSwapchainKHR swapchain) const
        {
            return _table.vkAcquireFullScreenExclusiveModeEXT(_device, swapchain);
        }
        inline VkResult ReleaseFullScreenExclusiveModeEXT(VkSwapchainKHR swapchain) const
        {
            return _table.vkReleaseFullScreenExclusiveModeEXT(_device, swapchain);
        }
#endif /* defined(VK_EXT_full_screen_exclusive) */
#if defined(VK_EXT_hdr_metadata)
        inline void SetHdrMetadataEXT(uint32_t swapchainCount, const VkSwapchainKHR *pSwapchains, const VkHdrMetadataEXT *pMetadata) const
        {
            _table.vkSetHdrMetadataEXT(_device, swapchainCount, pSwapchains, pMetadata);
        }
#endif /* defined(VK_EXT_hdr_metadata) */
#if defined(VK_EXT_host_query_reset)
        inline void ResetQueryPoolEXT(VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) const
        {
            _table.vkResetQueryPoolEXT(_device, queryPool, firstQuery, queryCount);
        }
#endif /* defined(VK_EXT_host_query_reset) */
#if defined(VK_EXT_image_drm_format_modifier)
        inline VkResult GetImageDrmFormatModifierPropertiesEXT(VkImage image, VkImageDrmFormatModifierPropertiesEXT *pProperties) const
        {
            return _table.vkGetImageDrmFormatModifierPropertiesEXT(_device, image, pProperties);
        }
#endif /* defined(VK_EXT_image_drm_format_modifier) */
#if defined(VK_EXT_line_rasterization)
        inline void CmdSetLineStippleEXT(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern) const
        {
            _table.vkCmdSetLineStippleEXT(commandBuffer, lineStippleFactor, lineStipplePattern);
        }
#endif /* defined(VK_EXT_line_rasterization) */
#if defined(VK_EXT_private_data)
        inline VkResult CreatePrivateDataSlotEXT(const VkPrivateDataSlotCreateInfoEXT *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkPrivateDataSlotEXT *pPrivateDataSlot) const
        {
            return _table.vkCreatePrivateDataSlotEXT(_device, pCreateInfo, pAllocator, pPrivateDataSlot);
        }
        inline void DestroyPrivateDataSlotEXT(VkPrivateDataSlotEXT privateDataSlot, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyPrivateDataSlotEXT(_device, privateDataSlot, pAllocator);
        }
        inline void GetPrivateDataEXT(VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t *pData) const
        {
            _table.vkGetPrivateDataEXT(_device, objectType, objectHandle, privateDataSlot, pData);
        }
        inline VkResult SetPrivateDataEXT(VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlotEXT privateDataSlot, uint64_t data) const
        {
            return _table.vkSetPrivateDataEXT(_device, objectType, objectHandle, privateDataSlot, data);
        }
#endif /* defined(VK_EXT_private_data) */
#if defined(VK_EXT_sample_locations)
        inline void CmdSetSampleLocationsEXT(VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT *pSampleLocationsInfo) const
        {
            _table.vkCmdSetSampleLocationsEXT(commandBuffer, pSampleLocationsInfo);
        }
#endif /* defined(VK_EXT_sample_locations) */
#if defined(VK_EXT_transform_feedback)
        inline void CmdBeginQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index) const
        {
            _table.vkCmdBeginQueryIndexedEXT(commandBuffer, queryPool, query, flags, index);
        }
        inline void CmdBeginTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer *pCounterBuffers, const VkDeviceSize *pCounterBufferOffsets) const
        {
            _table.vkCmdBeginTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
        }
        inline void CmdBindTransformFeedbackBuffersEXT(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer *pBuffers, const VkDeviceSize *pOffsets, const VkDeviceSize *pSizes) const
        {
            _table.vkCmdBindTransformFeedbackBuffersEXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes);
        }
        inline void CmdDrawIndirectByteCountEXT(VkCommandBuffer commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride) const
        {
            _table.vkCmdDrawIndirectByteCountEXT(commandBuffer, instanceCount, firstInstance, counterBuffer, counterBufferOffset, counterOffset, vertexStride);
        }
        inline void CmdEndQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index) const
        {
            _table.vkCmdEndQueryIndexedEXT(commandBuffer, queryPool, query, index);
        }
        inline void CmdEndTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer *pCounterBuffers, const VkDeviceSize *pCounterBufferOffsets) const
        {
            _table.vkCmdEndTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
        }
#endif /* defined(VK_EXT_transform_feedback) */
#if defined(VK_EXT_validation_cache)
        inline VkResult CreateValidationCacheEXT(const VkValidationCacheCreateInfoEXT *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkValidationCacheEXT *pValidationCache) const
        {
            return _table.vkCreateValidationCacheEXT(_device, pCreateInfo, pAllocator, pValidationCache);
        }
        inline void DestroyValidationCacheEXT(VkValidationCacheEXT validationCache, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyValidationCacheEXT(_device, validationCache, pAllocator);
        }
        inline VkResult GetValidationCacheDataEXT(VkValidationCacheEXT validationCache, size_t *pDataSize, void *pData) const
        {
            return _table.vkGetValidationCacheDataEXT(_device, validationCache, pDataSize, pData);
        }
        inline VkResult MergeValidationCachesEXT(VkValidationCacheEXT dstCache, uint32_t srcCacheCount, const VkValidationCacheEXT *pSrcCaches) const
        {
            return _table.vkMergeValidationCachesEXT(_device, dstCache, srcCacheCount, pSrcCaches);
        }
#endif /* defined(VK_EXT_validation_cache) */
#if defined(VK_GOOGLE_display_timing)
        inline VkResult GetPastPresentationTimingGOOGLE(VkSwapchainKHR swapchain, uint32_t *pPresentationTimingCount, VkPastPresentationTimingGOOGLE *pPresentationTimings) const
        {
            return _table.vkGetPastPresentationTimingGOOGLE(_device, swapchain, pPresentationTimingCount, pPresentationTimings);
        }
        inline VkResult GetRefreshCycleDurationGOOGLE(VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE *pDisplayTimingProperties) const
        {
            return _table.vkGetRefreshCycleDurationGOOGLE(_device, swapchain, pDisplayTimingProperties);
        }
#endif /* defined(VK_GOOGLE_display_timing) */
#if defined(VK_INTEL_performance_query)
        inline VkResult AcquirePerformanceConfigurationINTEL(const VkPerformanceConfigurationAcquireInfoINTEL *pAcquireInfo, VkPerformanceConfigurationINTEL *pConfiguration) const
        {
            return _table.vkAcquirePerformanceConfigurationINTEL(_device, pAcquireInfo, pConfiguration);
        }
        inline VkResult CmdSetPerformanceMarkerINTEL(VkCommandBuffer commandBuffer, const VkPerformanceMarkerInfoINTEL *pMarkerInfo) const
        {
            return _table.vkCmdSetPerformanceMarkerINTEL(commandBuffer, pMarkerInfo);
        }
        inline VkResult CmdSetPerformanceOverrideINTEL(VkCommandBuffer commandBuffer, const VkPerformanceOverrideInfoINTEL *pOverrideInfo) const
        {
            return _table.vkCmdSetPerformanceOverrideINTEL(commandBuffer, pOverrideInfo);
        }
        inline VkResult CmdSetPerformanceStreamMarkerINTEL(VkCommandBuffer commandBuffer, const VkPerformanceStreamMarkerInfoINTEL *pMarkerInfo) const
        {
            return _table.vkCmdSetPerformanceStreamMarkerINTEL(commandBuffer, pMarkerInfo);
        }
        inline VkResult GetPerformanceParameterINTEL(VkPerformanceParameterTypeINTEL parameter, VkPerformanceValueINTEL *pValue) const
        {
            return _table.vkGetPerformanceParameterINTEL(_device, parameter, pValue);
        }
        inline VkResult InitializePerformanceApiINTEL(const VkInitializePerformanceApiInfoINTEL *pInitializeInfo) const
        {
            return _table.vkInitializePerformanceApiINTEL(_device, pInitializeInfo);
        }
        inline VkResult QueueSetPerformanceConfigurationINTEL(VkQueue queue, VkPerformanceConfigurationINTEL configuration) const
        {
            return _table.vkQueueSetPerformanceConfigurationINTEL(queue, configuration);
        }
        inline VkResult ReleasePerformanceConfigurationINTEL(VkPerformanceConfigurationINTEL configuration) const
        {
            return _table.vkReleasePerformanceConfigurationINTEL(_device, configuration);
        }
        inline void UninitializePerformanceApiINTEL() const
        {
            _table.vkUninitializePerformanceApiINTEL(_device);
        }
#endif /* defined(VK_INTEL_performance_query) */
#if defined(VK_KHR_acceleration_structure)
        inline VkResult BuildAccelerationStructuresKHR(VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR *pInfos, const VkAccelerationStructureBuildRangeInfoKHR *const *ppBuildRangeInfos) const
        {
            return _table.vkBuildAccelerationStructuresKHR(_device, deferredOperation, infoCount, pInfos, ppBuildRangeInfos);
        }
        inline void CmdBuildAccelerationStructuresIndirectKHR(VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR *pInfos, const VkDeviceAddress *pIndirectDeviceAddresses, const uint32_t *pIndirectStrides, const uint32_t *const *ppMaxPrimitiveCounts) const
        {
            _table.vkCmdBuildAccelerationStructuresIndirectKHR(commandBuffer, infoCount, pInfos, pIndirectDeviceAddresses, pIndirectStrides, ppMaxPrimitiveCounts);
        }
        inline void CmdBuildAccelerationStructuresKHR(VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR *pInfos, const VkAccelerationStructureBuildRangeInfoKHR *const *ppBuildRangeInfos) const
        {
            _table.vkCmdBuildAccelerationStructuresKHR(commandBuffer, infoCount, pInfos, ppBuildRangeInfos);
        }
        inline void CmdCopyAccelerationStructureKHR(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureInfoKHR *pInfo) const
        {
            _table.vkCmdCopyAccelerationStructureKHR(commandBuffer, pInfo);
        }
        inline void CmdCopyAccelerationStructureToMemoryKHR(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureToMemoryInfoKHR *pInfo) const
        {
            _table.vkCmdCopyAccelerationStructureToMemoryKHR(commandBuffer, pInfo);
        }
        inline void CmdCopyMemoryToAccelerationStructureKHR(VkCommandBuffer commandBuffer, const VkCopyMemoryToAccelerationStructureInfoKHR *pInfo) const
        {
            _table.vkCmdCopyMemoryToAccelerationStructureKHR(commandBuffer, pInfo);
        }
        inline void CmdWriteAccelerationStructuresPropertiesKHR(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR *pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) const
        {
            _table.vkCmdWriteAccelerationStructuresPropertiesKHR(commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
        }
        inline VkResult CopyAccelerationStructureKHR(VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureInfoKHR *pInfo) const
        {
            return _table.vkCopyAccelerationStructureKHR(_device, deferredOperation, pInfo);
        }
        inline VkResult CopyAccelerationStructureToMemoryKHR(VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureToMemoryInfoKHR *pInfo) const
        {
            return _table.vkCopyAccelerationStructureToMemoryKHR(_device, deferredOperation, pInfo);
        }
        inline VkResult CopyMemoryToAccelerationStructureKHR(VkDeferredOperationKHR deferredOperation, const VkCopyMemoryToAccelerationStructureInfoKHR *pInfo) const
        {
            return _table.vkCopyMemoryToAccelerationStructureKHR(_device, deferredOperation, pInfo);
        }
        inline VkResult CreateAccelerationStructureKHR(const VkAccelerationStructureCreateInfoKHR *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkAccelerationStructureKHR *pAccelerationStructure) const
        {
            return _table.vkCreateAccelerationStructureKHR(_device, pCreateInfo, pAllocator, pAccelerationStructure);
        }
        inline void DestroyAccelerationStructureKHR(VkAccelerationStructureKHR accelerationStructure, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyAccelerationStructureKHR(_device, accelerationStructure, pAllocator);
        }
        inline void GetAccelerationStructureBuildSizesKHR(VkAccelerationStructureBuildTypeKHR buildType, const VkAccelerationStructureBuildGeometryInfoKHR *pBuildInfo, const uint32_t *pMaxPrimitiveCounts, VkAccelerationStructureBuildSizesInfoKHR *pSizeInfo) const
        {
            _table.vkGetAccelerationStructureBuildSizesKHR(_device, buildType, pBuildInfo, pMaxPrimitiveCounts, pSizeInfo);
        }
        inline VkDeviceAddress GetAccelerationStructureDeviceAddressKHR(const VkAccelerationStructureDeviceAddressInfoKHR *pInfo) const
        {
            return _table.vkGetAccelerationStructureDeviceAddressKHR(_device, pInfo);
        }
        inline void GetDeviceAccelerationStructureCompatibilityKHR(const VkAccelerationStructureVersionInfoKHR *pVersionInfo, VkAccelerationStructureCompatibilityKHR *pCompatibility) const
        {
            _table.vkGetDeviceAccelerationStructureCompatibilityKHR(_device, pVersionInfo, pCompatibility);
        }
        inline VkResult WriteAccelerationStructuresPropertiesKHR(uint32_t accelerationStructureCount, const VkAccelerationStructureKHR *pAccelerationStructures, VkQueryType queryType, size_t dataSize, void *pData, size_t stride) const
        {
            return _table.vkWriteAccelerationStructuresPropertiesKHR(_device, accelerationStructureCount, pAccelerationStructures, queryType, dataSize, pData, stride);
        }
#endif /* defined(VK_KHR_acceleration_structure) */
#if defined(VK_KHR_bind_memory2)
        inline VkResult BindBufferMemory2KHR(uint32_t bindInfoCount, const VkBindBufferMemoryInfo *pBindInfos) const
        {
            return _table.vkBindBufferMemory2KHR(_device, bindInfoCount, pBindInfos);
        }
        inline VkResult BindImageMemory2KHR(uint32_t bindInfoCount, const VkBindImageMemoryInfo *pBindInfos) const
        {
            return _table.vkBindImageMemory2KHR(_device, bindInfoCount, pBindInfos);
        }
#endif /* defined(VK_KHR_bind_memory2) */
#if defined(VK_KHR_buffer_device_address)
        inline VkDeviceAddress GetBufferDeviceAddressKHR(const VkBufferDeviceAddressInfo *pInfo) const
        {
            return _table.vkGetBufferDeviceAddressKHR(_device, pInfo);
        }
        inline uint64_t GetBufferOpaqueCaptureAddressKHR(const VkBufferDeviceAddressInfo *pInfo) const
        {
            return _table.vkGetBufferOpaqueCaptureAddressKHR(_device, pInfo);
        }
        inline uint64_t GetDeviceMemoryOpaqueCaptureAddressKHR(const VkDeviceMemoryOpaqueCaptureAddressInfo *pInfo) const
        {
            return _table.vkGetDeviceMemoryOpaqueCaptureAddressKHR(_device, pInfo);
        }
#endif /* defined(VK_KHR_buffer_device_address) */
#if defined(VK_KHR_copy_commands2)
        inline void CmdBlitImage2KHR(VkCommandBuffer commandBuffer, const VkBlitImageInfo2KHR *pBlitImageInfo) const
        {
            _table.vkCmdBlitImage2KHR(commandBuffer, pBlitImageInfo);
        }
        inline void CmdCopyBuffer2KHR(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2KHR *pCopyBufferInfo) const
        {
            _table.vkCmdCopyBuffer2KHR(commandBuffer, pCopyBufferInfo);
        }
        inline void CmdCopyBufferToImage2KHR(VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2KHR *pCopyBufferToImageInfo) const
        {
            _table.vkCmdCopyBufferToImage2KHR(commandBuffer, pCopyBufferToImageInfo);
        }
        inline void CmdCopyImage2KHR(VkCommandBuffer commandBuffer, const VkCopyImageInfo2KHR *pCopyImageInfo) const
        {
            _table.vkCmdCopyImage2KHR(commandBuffer, pCopyImageInfo);
        }
        inline void CmdCopyImageToBuffer2KHR(VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2KHR *pCopyImageToBufferInfo) const
        {
            _table.vkCmdCopyImageToBuffer2KHR(commandBuffer, pCopyImageToBufferInfo);
        }
        inline void CmdResolveImage2KHR(VkCommandBuffer commandBuffer, const VkResolveImageInfo2KHR *pResolveImageInfo) const
        {
            _table.vkCmdResolveImage2KHR(commandBuffer, pResolveImageInfo);
        }
#endif /* defined(VK_KHR_copy_commands2) */
#if defined(VK_KHR_create_renderpass2)
        inline void CmdBeginRenderPass2KHR(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo *pRenderPassBegin, const VkSubpassBeginInfo *pSubpassBeginInfo) const
        {
            _table.vkCmdBeginRenderPass2KHR(commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
        }
        inline void CmdEndRenderPass2KHR(VkCommandBuffer commandBuffer, const VkSubpassEndInfo *pSubpassEndInfo) const
        {
            _table.vkCmdEndRenderPass2KHR(commandBuffer, pSubpassEndInfo);
        }
        inline void CmdNextSubpass2KHR(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo *pSubpassBeginInfo, const VkSubpassEndInfo *pSubpassEndInfo) const
        {
            _table.vkCmdNextSubpass2KHR(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
        }
        inline VkResult CreateRenderPass2KHR(const VkRenderPassCreateInfo2 *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkRenderPass *pRenderPass) const
        {
            return _table.vkCreateRenderPass2KHR(_device, pCreateInfo, pAllocator, pRenderPass);
        }
#endif /* defined(VK_KHR_create_renderpass2) */
#if defined(VK_KHR_deferred_host_operations)
        inline VkResult CreateDeferredOperationKHR(const VkAllocationCallbacks *pAllocator, VkDeferredOperationKHR *pDeferredOperation) const
        {
            return _table.vkCreateDeferredOperationKHR(_device, pAllocator, pDeferredOperation);
        }
        inline VkResult DeferredOperationJoinKHR(VkDeferredOperationKHR operation) const
        {
            return _table.vkDeferredOperationJoinKHR(_device, operation);
        }
        inline void DestroyDeferredOperationKHR(VkDeferredOperationKHR operation, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyDeferredOperationKHR(_device, operation, pAllocator);
        }
        inline uint32_t GetDeferredOperationMaxConcurrencyKHR(VkDeferredOperationKHR operation) const
        {
            return _table.vkGetDeferredOperationMaxConcurrencyKHR(_device, operation);
        }
        inline VkResult GetDeferredOperationResultKHR(VkDeferredOperationKHR operation) const
        {
            return _table.vkGetDeferredOperationResultKHR(_device, operation);
        }
#endif /* defined(VK_KHR_deferred_host_operations) */
#if defined(VK_KHR_descriptor_update_template)
        inline VkResult CreateDescriptorUpdateTemplateKHR(const VkDescriptorUpdateTemplateCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkDescriptorUpdateTemplate *pDescriptorUpdateTemplate) const
        {
            return _table.vkCreateDescriptorUpdateTemplateKHR(_device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
        }
        inline void DestroyDescriptorUpdateTemplateKHR(VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyDescriptorUpdateTemplateKHR(_device, descriptorUpdateTemplate, pAllocator);
        }
        inline void UpdateDescriptorSetWithTemplateKHR(VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void *pData) const
        {
            _table.vkUpdateDescriptorSetWithTemplateKHR(_device, descriptorSet, descriptorUpdateTemplate, pData);
        }
#endif /* defined(VK_KHR_descriptor_update_template) */
#if defined(VK_KHR_device_group)
        inline void CmdDispatchBaseKHR(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) const
        {
            _table.vkCmdDispatchBaseKHR(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
        }
        inline void CmdSetDeviceMaskKHR(VkCommandBuffer commandBuffer, uint32_t deviceMask) const
        {
            _table.vkCmdSetDeviceMaskKHR(commandBuffer, deviceMask);
        }
        inline void GetDeviceGroupPeerMemoryFeaturesKHR(uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags *pPeerMemoryFeatures) const
        {
            _table.vkGetDeviceGroupPeerMemoryFeaturesKHR(_device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
        }
#endif /* defined(VK_KHR_device_group) */
#if defined(VK_KHR_display_swapchain)
        inline VkResult CreateSharedSwapchainsKHR(uint32_t swapchainCount, const VkSwapchainCreateInfoKHR *pCreateInfos, const VkAllocationCallbacks *pAllocator, VkSwapchainKHR *pSwapchains) const
        {
            return _table.vkCreateSharedSwapchainsKHR(_device, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
        }
#endif /* defined(VK_KHR_display_swapchain) */
#if defined(VK_KHR_draw_indirect_count)
        inline void CmdDrawIndexedIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) const
        {
            _table.vkCmdDrawIndexedIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
        }
        inline void CmdDrawIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) const
        {
            _table.vkCmdDrawIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
        }
#endif /* defined(VK_KHR_draw_indirect_count) */
#if defined(VK_KHR_external_fence_fd)
        inline VkResult GetFenceFdKHR(const VkFenceGetFdInfoKHR *pGetFdInfo, int *pFd) const
        {
            return _table.vkGetFenceFdKHR(_device, pGetFdInfo, pFd);
        }
        inline VkResult ImportFenceFdKHR(const VkImportFenceFdInfoKHR *pImportFenceFdInfo) const
        {
            return _table.vkImportFenceFdKHR(_device, pImportFenceFdInfo);
        }
#endif /* defined(VK_KHR_external_fence_fd) */
#if defined(VK_KHR_external_fence_win32)
        inline VkResult GetFenceWin32HandleKHR(const VkFenceGetWin32HandleInfoKHR *pGetWin32HandleInfo, HANDLE *pHandle) const
        {
            return _table.vkGetFenceWin32HandleKHR(_device, pGetWin32HandleInfo, pHandle);
        }
        inline VkResult ImportFenceWin32HandleKHR(const VkImportFenceWin32HandleInfoKHR *pImportFenceWin32HandleInfo) const
        {
            return _table.vkImportFenceWin32HandleKHR(_device, pImportFenceWin32HandleInfo);
        }
#endif /* defined(VK_KHR_external_fence_win32) */
#if defined(VK_KHR_external_memory_fd)
        inline VkResult GetMemoryFdKHR(const VkMemoryGetFdInfoKHR *pGetFdInfo, int *pFd) const
        {
            return _table.vkGetMemoryFdKHR(_device, pGetFdInfo, pFd);
        }
        inline VkResult GetMemoryFdPropertiesKHR(VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR *pMemoryFdProperties) const
        {
            return _table.vkGetMemoryFdPropertiesKHR(_device, handleType, fd, pMemoryFdProperties);
        }
#endif /* defined(VK_KHR_external_memory_fd) */
#if defined(VK_KHR_external_memory_win32)
        inline VkResult GetMemoryWin32HandleKHR(const VkMemoryGetWin32HandleInfoKHR *pGetWin32HandleInfo, HANDLE *pHandle) const
        {
            return _table.vkGetMemoryWin32HandleKHR(_device, pGetWin32HandleInfo, pHandle);
        }
        inline VkResult GetMemoryWin32HandlePropertiesKHR(VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle, VkMemoryWin32HandlePropertiesKHR *pMemoryWin32HandleProperties) const
        {
            return _table.vkGetMemoryWin32HandlePropertiesKHR(_device, handleType, handle, pMemoryWin32HandleProperties);
        }
#endif /* defined(VK_KHR_external_memory_win32) */
#if defined(VK_KHR_external_semaphore_fd)
        inline VkResult GetSemaphoreFdKHR(const VkSemaphoreGetFdInfoKHR *pGetFdInfo, int *pFd) const
        {
            return _table.vkGetSemaphoreFdKHR(_device, pGetFdInfo, pFd);
        }
        inline VkResult ImportSemaphoreFdKHR(const VkImportSemaphoreFdInfoKHR *pImportSemaphoreFdInfo) const
        {
            return _table.vkImportSemaphoreFdKHR(_device, pImportSemaphoreFdInfo);
        }
#endif /* defined(VK_KHR_external_semaphore_fd) */
#if defined(VK_KHR_external_semaphore_win32)
        inline VkResult GetSemaphoreWin32HandleKHR(const VkSemaphoreGetWin32HandleInfoKHR *pGetWin32HandleInfo, HANDLE *pHandle) const
        {
            return _table.vkGetSemaphoreWin32HandleKHR(_device, pGetWin32HandleInfo, pHandle);
        }
        inline VkResult ImportSemaphoreWin32HandleKHR(const VkImportSemaphoreWin32HandleInfoKHR *pImportSemaphoreWin32HandleInfo) const
        {
            return _table.vkImportSemaphoreWin32HandleKHR(_device, pImportSemaphoreWin32HandleInfo);
        }
#endif /* defined(VK_KHR_external_semaphore_win32) */
#if defined(VK_KHR_fragment_shading_rate)
        inline void CmdSetFragmentShadingRateKHR(VkCommandBuffer commandBuffer, const VkExtent2D *pFragmentSize, const VkFragmentShadingRateCombinerOpKHR combinerOps[2]) const
        {
            _table.vkCmdSetFragmentShadingRateKHR(commandBuffer, pFragmentSize, combinerOps);
        }
#endif /* defined(VK_KHR_fragment_shading_rate) */
#if defined(VK_KHR_get_memory_requirements2)
        inline void GetBufferMemoryRequirements2KHR(const VkBufferMemoryRequirementsInfo2 *pInfo, VkMemoryRequirements2 *pMemoryRequirements) const
        {
            _table.vkGetBufferMemoryRequirements2KHR(_device, pInfo, pMemoryRequirements);
        }
        inline void GetImageMemoryRequirements2KHR(const VkImageMemoryRequirementsInfo2 *pInfo, VkMemoryRequirements2 *pMemoryRequirements) const
        {
            _table.vkGetImageMemoryRequirements2KHR(_device, pInfo, pMemoryRequirements);
        }
        inline void GetImageSparseMemoryRequirements2KHR(const VkImageSparseMemoryRequirementsInfo2 *pInfo, uint32_t *pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 *pSparseMemoryRequirements) const
        {
            _table.vkGetImageSparseMemoryRequirements2KHR(_device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
        }
#endif /* defined(VK_KHR_get_memory_requirements2) */
#if defined(VK_KHR_maintenance1)
        inline void TrimCommandPoolKHR(VkCommandPool commandPool, VkCommandPoolTrimFlags flags) const
        {
            _table.vkTrimCommandPoolKHR(_device, commandPool, flags);
        }
#endif /* defined(VK_KHR_maintenance1) */
#if defined(VK_KHR_maintenance3)
        inline void GetDescriptorSetLayoutSupportKHR(const VkDescriptorSetLayoutCreateInfo *pCreateInfo, VkDescriptorSetLayoutSupport *pSupport) const
        {
            _table.vkGetDescriptorSetLayoutSupportKHR(_device, pCreateInfo, pSupport);
        }
#endif /* defined(VK_KHR_maintenance3) */
#if defined(VK_KHR_performance_query)
        inline VkResult AcquireProfilingLockKHR(const VkAcquireProfilingLockInfoKHR *pInfo) const
        {
            return _table.vkAcquireProfilingLockKHR(_device, pInfo);
        }
        inline void ReleaseProfilingLockKHR() const
        {
            _table.vkReleaseProfilingLockKHR(_device);
        }
#endif /* defined(VK_KHR_performance_query) */
#if defined(VK_KHR_pipeline_executable_properties)
        inline VkResult GetPipelineExecutableInternalRepresentationsKHR(const VkPipelineExecutableInfoKHR *pExecutableInfo, uint32_t *pInternalRepresentationCount, VkPipelineExecutableInternalRepresentationKHR *pInternalRepresentations) const
        {
            return _table.vkGetPipelineExecutableInternalRepresentationsKHR(_device, pExecutableInfo, pInternalRepresentationCount, pInternalRepresentations);
        }
        inline VkResult GetPipelineExecutablePropertiesKHR(const VkPipelineInfoKHR *pPipelineInfo, uint32_t *pExecutableCount, VkPipelineExecutablePropertiesKHR *pProperties) const
        {
            return _table.vkGetPipelineExecutablePropertiesKHR(_device, pPipelineInfo, pExecutableCount, pProperties);
        }
        inline VkResult GetPipelineExecutableStatisticsKHR(const VkPipelineExecutableInfoKHR *pExecutableInfo, uint32_t *pStatisticCount, VkPipelineExecutableStatisticKHR *pStatistics) const
        {
            return _table.vkGetPipelineExecutableStatisticsKHR(_device, pExecutableInfo, pStatisticCount, pStatistics);
        }
#endif /* defined(VK_KHR_pipeline_executable_properties) */
#if defined(VK_KHR_push_descriptor)
        inline void CmdPushDescriptorSetKHR(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet *pDescriptorWrites) const
        {
            _table.vkCmdPushDescriptorSetKHR(commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites);
        }
#endif /* defined(VK_KHR_push_descriptor) */
#if defined(VK_KHR_ray_tracing_pipeline)
        inline void CmdSetRayTracingPipelineStackSizeKHR(VkCommandBuffer commandBuffer, uint32_t pipelineStackSize) const
        {
            _table.vkCmdSetRayTracingPipelineStackSizeKHR(commandBuffer, pipelineStackSize);
        }
        inline void CmdTraceRaysIndirectKHR(VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR *pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR *pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR *pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR *pCallableShaderBindingTable, VkDeviceAddress indirectDeviceAddress) const
        {
            _table.vkCmdTraceRaysIndirectKHR(commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, indirectDeviceAddress);
        }
        inline void CmdTraceRaysKHR(VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR *pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR *pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR *pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR *pCallableShaderBindingTable, uint32_t width, uint32_t height, uint32_t depth) const
        {
            _table.vkCmdTraceRaysKHR(commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, width, height, depth);
        }
        inline VkResult CreateRayTracingPipelinesKHR(VkDeferredOperationKHR deferredOperation, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR *pCreateInfos, const VkAllocationCallbacks *pAllocator, VkPipeline *pPipelines) const
        {
            return _table.vkCreateRayTracingPipelinesKHR(_device, deferredOperation, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
        }
        inline VkResult GetRayTracingCaptureReplayShaderGroupHandlesKHR(VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void *pData) const
        {
            return _table.vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(_device, pipeline, firstGroup, groupCount, dataSize, pData);
        }
        inline VkResult GetRayTracingShaderGroupHandlesKHR(VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void *pData) const
        {
            return _table.vkGetRayTracingShaderGroupHandlesKHR(_device, pipeline, firstGroup, groupCount, dataSize, pData);
        }
        inline VkDeviceSize GetRayTracingShaderGroupStackSizeKHR(VkPipeline pipeline, uint32_t group, VkShaderGroupShaderKHR groupShader) const
        {
            return _table.vkGetRayTracingShaderGroupStackSizeKHR(_device, pipeline, group, groupShader);
        }
#endif /* defined(VK_KHR_ray_tracing_pipeline) */
#if defined(VK_KHR_sampler_ycbcr_conversion)
        inline VkResult CreateSamplerYcbcrConversionKHR(const VkSamplerYcbcrConversionCreateInfo *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkSamplerYcbcrConversion *pYcbcrConversion) const
        {
            return _table.vkCreateSamplerYcbcrConversionKHR(_device, pCreateInfo, pAllocator, pYcbcrConversion);
        }
        inline void DestroySamplerYcbcrConversionKHR(VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroySamplerYcbcrConversionKHR(_device, ycbcrConversion, pAllocator);
        }
#endif /* defined(VK_KHR_sampler_ycbcr_conversion) */
#if defined(VK_KHR_shared_presentable_image)
        inline VkResult GetSwapchainStatusKHR(VkSwapchainKHR swapchain) const
        {
            return _table.vkGetSwapchainStatusKHR(_device, swapchain);
        }
#endif /* defined(VK_KHR_shared_presentable_image) */
#if defined(VK_KHR_swapchain)
        inline VkResult AcquireNextImageKHR(VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t *pImageIndex) const
        {
            return _table.vkAcquireNextImageKHR(_device, swapchain, timeout, semaphore, fence, pImageIndex);
        }
        inline VkResult CreateSwapchainKHR(const VkSwapchainCreateInfoKHR *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkSwapchainKHR *pSwapchain) const
        {
            return _table.vkCreateSwapchainKHR(_device, pCreateInfo, pAllocator, pSwapchain);
        }
        inline void DestroySwapchainKHR(VkSwapchainKHR swapchain, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroySwapchainKHR(_device, swapchain, pAllocator);
        }
        inline VkResult GetSwapchainImagesKHR(VkSwapchainKHR swapchain, uint32_t *pSwapchainImageCount, VkImage *pSwapchainImages) const
        {
            return _table.vkGetSwapchainImagesKHR(_device, swapchain, pSwapchainImageCount, pSwapchainImages);
        }
        inline VkResult QueuePresentKHR(VkQueue queue, const VkPresentInfoKHR *pPresentInfo) const
        {
            return _table.vkQueuePresentKHR(queue, pPresentInfo);
        }
#endif /* defined(VK_KHR_swapchain) */
#if defined(VK_KHR_timeline_semaphore)
        inline VkResult GetSemaphoreCounterValueKHR(VkSemaphore semaphore, uint64_t *pValue) const
        {
            return _table.vkGetSemaphoreCounterValueKHR(_device, semaphore, pValue);
        }
        inline VkResult SignalSemaphoreKHR(const VkSemaphoreSignalInfo *pSignalInfo) const
        {
            return _table.vkSignalSemaphoreKHR(_device, pSignalInfo);
        }
        inline VkResult WaitSemaphoresKHR(const VkSemaphoreWaitInfo *pWaitInfo, uint64_t timeout) const
        {
            return _table.vkWaitSemaphoresKHR(_device, pWaitInfo, timeout);
        }
#endif /* defined(VK_KHR_timeline_semaphore) */
#if defined(VK_NVX_image_view_handle)
        inline VkResult GetImageViewAddressNVX(VkImageView imageView, VkImageViewAddressPropertiesNVX *pProperties) const
        {
            return _table.vkGetImageViewAddressNVX(_device, imageView, pProperties);
        }
        inline uint32_t GetImageViewHandleNVX(const VkImageViewHandleInfoNVX *pInfo) const
        {
            return _table.vkGetImageViewHandleNVX(_device, pInfo);
        }
#endif /* defined(VK_NVX_image_view_handle) */
#if defined(VK_NV_clip_space_w_scaling)
        inline void CmdSetViewportWScalingNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewportWScalingNV *pViewportWScalings) const
        {
            _table.vkCmdSetViewportWScalingNV(commandBuffer, firstViewport, viewportCount, pViewportWScalings);
        }
#endif /* defined(VK_NV_clip_space_w_scaling) */
#if defined(VK_NV_device_diagnostic_checkpoints)
        inline void CmdSetCheckpointNV(VkCommandBuffer commandBuffer, const void *pCheckpointMarker) const
        {
            _table.vkCmdSetCheckpointNV(commandBuffer, pCheckpointMarker);
        }
        inline void GetQueueCheckpointDataNV(VkQueue queue, uint32_t *pCheckpointDataCount, VkCheckpointDataNV *pCheckpointData) const
        {
            _table.vkGetQueueCheckpointDataNV(queue, pCheckpointDataCount, pCheckpointData);
        }
#endif /* defined(VK_NV_device_diagnostic_checkpoints) */
#if defined(VK_NV_device_generated_commands)
        inline void CmdBindPipelineShaderGroupNV(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline, uint32_t groupIndex) const
        {
            _table.vkCmdBindPipelineShaderGroupNV(commandBuffer, pipelineBindPoint, pipeline, groupIndex);
        }
        inline void CmdExecuteGeneratedCommandsNV(VkCommandBuffer commandBuffer, VkBool32 isPreprocessed, const VkGeneratedCommandsInfoNV *pGeneratedCommandsInfo) const
        {
            _table.vkCmdExecuteGeneratedCommandsNV(commandBuffer, isPreprocessed, pGeneratedCommandsInfo);
        }
        inline void CmdPreprocessGeneratedCommandsNV(VkCommandBuffer commandBuffer, const VkGeneratedCommandsInfoNV *pGeneratedCommandsInfo) const
        {
            _table.vkCmdPreprocessGeneratedCommandsNV(commandBuffer, pGeneratedCommandsInfo);
        }
        inline VkResult CreateIndirectCommandsLayoutNV(const VkIndirectCommandsLayoutCreateInfoNV *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkIndirectCommandsLayoutNV *pIndirectCommandsLayout) const
        {
            return _table.vkCreateIndirectCommandsLayoutNV(_device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
        }
        inline void DestroyIndirectCommandsLayoutNV(VkIndirectCommandsLayoutNV indirectCommandsLayout, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyIndirectCommandsLayoutNV(_device, indirectCommandsLayout, pAllocator);
        }
        inline void GetGeneratedCommandsMemoryRequirementsNV(const VkGeneratedCommandsMemoryRequirementsInfoNV *pInfo, VkMemoryRequirements2 *pMemoryRequirements) const
        {
            _table.vkGetGeneratedCommandsMemoryRequirementsNV(_device, pInfo, pMemoryRequirements);
        }
#endif /* defined(VK_NV_device_generated_commands) */
#if defined(VK_NV_external_memory_win32)
        inline VkResult GetMemoryWin32HandleNV(VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE *pHandle) const
        {
            return _table.vkGetMemoryWin32HandleNV(_device, memory, handleType, pHandle);
        }
#endif /* defined(VK_NV_external_memory_win32) */
#if defined(VK_NV_fragment_shading_rate_enums)
        inline void CmdSetFragmentShadingRateEnumNV(VkCommandBuffer commandBuffer, VkFragmentShadingRateNV shadingRate, const VkFragmentShadingRateCombinerOpKHR combinerOps[2]) const
        {
            _table.vkCmdSetFragmentShadingRateEnumNV(commandBuffer, shadingRate, combinerOps);
        }
#endif /* defined(VK_NV_fragment_shading_rate_enums) */
#if defined(VK_NV_mesh_shader)
        inline void CmdDrawMeshTasksIndirectCountNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) const
        {
            _table.vkCmdDrawMeshTasksIndirectCountNV(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
        }
        inline void CmdDrawMeshTasksIndirectNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) const
        {
            _table.vkCmdDrawMeshTasksIndirectNV(commandBuffer, buffer, offset, drawCount, stride);
        }
        inline void CmdDrawMeshTasksNV(VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask) const
        {
            _table.vkCmdDrawMeshTasksNV(commandBuffer, taskCount, firstTask);
        }
#endif /* defined(VK_NV_mesh_shader) */
#if defined(VK_NV_ray_tracing)
        inline VkResult BindAccelerationStructureMemoryNV(uint32_t bindInfoCount, const VkBindAccelerationStructureMemoryInfoNV *pBindInfos) const
        {
            return _table.vkBindAccelerationStructureMemoryNV(_device, bindInfoCount, pBindInfos);
        }
        inline void CmdBuildAccelerationStructureNV(VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV *pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset) const
        {
            _table.vkCmdBuildAccelerationStructureNV(commandBuffer, pInfo, instanceData, instanceOffset, update, dst, src, scratch, scratchOffset);
        }
        inline void CmdCopyAccelerationStructureNV(VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkCopyAccelerationStructureModeKHR mode) const
        {
            _table.vkCmdCopyAccelerationStructureNV(commandBuffer, dst, src, mode);
        }
        inline void CmdTraceRaysNV(VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride, VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth) const
        {
            _table.vkCmdTraceRaysNV(commandBuffer, raygenShaderBindingTableBuffer, raygenShaderBindingOffset, missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width, height, depth);
        }
        inline void CmdWriteAccelerationStructuresPropertiesNV(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureNV *pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) const
        {
            _table.vkCmdWriteAccelerationStructuresPropertiesNV(commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
        }
        inline VkResult CompileDeferredNV(VkPipeline pipeline, uint32_t shader) const
        {
            return _table.vkCompileDeferredNV(_device, pipeline, shader);
        }
        inline VkResult CreateAccelerationStructureNV(const VkAccelerationStructureCreateInfoNV *pCreateInfo, const VkAllocationCallbacks *pAllocator, VkAccelerationStructureNV *pAccelerationStructure) const
        {
            return _table.vkCreateAccelerationStructureNV(_device, pCreateInfo, pAllocator, pAccelerationStructure);
        }
        inline VkResult CreateRayTracingPipelinesNV(VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV *pCreateInfos, const VkAllocationCallbacks *pAllocator, VkPipeline *pPipelines) const
        {
            return _table.vkCreateRayTracingPipelinesNV(_device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
        }
        inline void DestroyAccelerationStructureNV(VkAccelerationStructureNV accelerationStructure, const VkAllocationCallbacks *pAllocator) const
        {
            _table.vkDestroyAccelerationStructureNV(_device, accelerationStructure, pAllocator);
        }
        inline VkResult GetAccelerationStructureHandleNV(VkAccelerationStructureNV accelerationStructure, size_t dataSize, void *pData) const
        {
            return _table.vkGetAccelerationStructureHandleNV(_device, accelerationStructure, dataSize, pData);
        }
        inline void GetAccelerationStructureMemoryRequirementsNV(const VkAccelerationStructureMemoryRequirementsInfoNV *pInfo, VkMemoryRequirements2KHR *pMemoryRequirements) const
        {
            _table.vkGetAccelerationStructureMemoryRequirementsNV(_device, pInfo, pMemoryRequirements);
        }
        inline VkResult GetRayTracingShaderGroupHandlesNV(VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void *pData) const
        {
            return _table.vkGetRayTracingShaderGroupHandlesNV(_device, pipeline, firstGroup, groupCount, dataSize, pData);
        }
#endif /* defined(VK_NV_ray_tracing) */
#if defined(VK_NV_scissor_exclusive)
        inline void CmdSetExclusiveScissorNV(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkRect2D *pExclusiveScissors) const
        {
            _table.vkCmdSetExclusiveScissorNV(commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissors);
        }
#endif /* defined(VK_NV_scissor_exclusive) */
#if defined(VK_NV_shading_rate_image)
        inline void CmdBindShadingRateImageNV(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout) const
        {
            _table.vkCmdBindShadingRateImageNV(commandBuffer, imageView, imageLayout);
        }
        inline void CmdSetCoarseSampleOrderNV(VkCommandBuffer commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount, const VkCoarseSampleOrderCustomNV *pCustomSampleOrders) const
        {
            _table.vkCmdSetCoarseSampleOrderNV(commandBuffer, sampleOrderType, customSampleOrderCount, pCustomSampleOrders);
        }
        inline void CmdSetViewportShadingRatePaletteNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkShadingRatePaletteNV *pShadingRatePalettes) const
        {
            _table.vkCmdSetViewportShadingRatePaletteNV(commandBuffer, firstViewport, viewportCount, pShadingRatePalettes);
        }
#endif /* defined(VK_NV_shading_rate_image) */
#if (defined(VK_EXT_full_screen_exclusive) && defined(VK_KHR_device_group)) || (defined(VK_EXT_full_screen_exclusive) && defined(VK_VERSION_1_1))
        inline VkResult GetDeviceGroupSurfacePresentModes2EXT(const VkPhysicalDeviceSurfaceInfo2KHR *pSurfaceInfo, VkDeviceGroupPresentModeFlagsKHR *pModes) const
        {
            return _table.vkGetDeviceGroupSurfacePresentModes2EXT(_device, pSurfaceInfo, pModes);
        }
#endif /* (defined(VK_EXT_full_screen_exclusive) && defined(VK_KHR_device_group)) || (defined(VK_EXT_full_screen_exclusive) && defined(VK_VERSION_1_1)) */
#if (defined(VK_KHR_descriptor_update_template) && defined(VK_KHR_push_descriptor)) || (defined(VK_KHR_push_descriptor) && defined(VK_VERSION_1_1)) || (defined(VK_KHR_push_descriptor) && defined(VK_KHR_descriptor_update_template))
        inline void CmdPushDescriptorSetWithTemplateKHR(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void *pData) const
        {
            _table.vkCmdPushDescriptorSetWithTemplateKHR(commandBuffer, descriptorUpdateTemplate, layout, set, pData);
        }
#endif /* (defined(VK_KHR_descriptor_update_template) && defined(VK_KHR_push_descriptor)) || (defined(VK_KHR_push_descriptor) && defined(VK_VERSION_1_1)) || (defined(VK_KHR_push_descriptor) && defined(VK_KHR_descriptor_update_template)) */
#if (defined(VK_KHR_device_group) && defined(VK_KHR_surface)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1))
        inline VkResult GetDeviceGroupPresentCapabilitiesKHR(VkDeviceGroupPresentCapabilitiesKHR *pDeviceGroupPresentCapabilities) const
        {
            return _table.vkGetDeviceGroupPresentCapabilitiesKHR(_device, pDeviceGroupPresentCapabilities);
        }
        inline VkResult GetDeviceGroupSurfacePresentModesKHR(VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR *pModes) const
        {
            return _table.vkGetDeviceGroupSurfacePresentModesKHR(_device, surface, pModes);
        }
#endif /* (defined(VK_KHR_device_group) && defined(VK_KHR_surface)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)) */
#if (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1))
        inline VkResult AcquireNextImage2KHR(const VkAcquireNextImageInfoKHR *pAcquireInfo, uint32_t *pImageIndex) const
        {
            return _table.vkAcquireNextImage2KHR(_device, pAcquireInfo, pImageIndex);
        }
#endif /* (defined(VK_KHR_device_group) && defined(VK_KHR_swapchain)) || (defined(VK_KHR_swapchain) && defined(VK_VERSION_1_1)) */
        /* VOLK_GENERATE_DEVICE_METHOD_HPP */
    private:
        VkDevice _device;
        VolkDeviceTable _table;
    };
} // namespace VOLK_NAMESPACE

#endif