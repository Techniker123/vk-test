#include "VkErrorHandler.hpp"

void VkErrorHandler::handleVulkanError(const VkResult t_result){
    if (t_result<0)
        std::cout << "Function Returned Error Code: " << t_result << std::endl;
    return;
}