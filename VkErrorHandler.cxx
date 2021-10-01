module;
#include <iostream>
#include "vulkan/vulkan.h"
export module VkErrorHandler;

export void handleVkError(VkResult t_result){
    if(0 <= t_result)
        return;
    std::cout << "VkErrorCode: " << t_result << std::endl;
}