#include <iostream>
#include <vector>
#include "vulkan/vulkan.h"

int main(){
    VkApplicationInfo m_appInfo;
    m_appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    m_appInfo.pNext = nullptr;
    m_appInfo.pApplicationName = "Vk Test";
    m_appInfo.applicationVersion = VK_MAKE_VERSION(1,0,0);
    m_appInfo.pEngineName = "FrostEngine";
    m_appInfo.engineVersion = 0;
    m_appInfo.apiVersion = VK_MAKE_VERSION(1,0,0);

    std::vector<const char*> m_enabledLayers;
    m_enabledLayers.push_back("VK_LAYER_KHRONOS_validation");

    VkInstanceCreateInfo m_instanceCreateInfo;
    m_instanceCreateInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    m_instanceCreateInfo.pNext = nullptr;
    m_instanceCreateInfo.flags = 0;
    m_instanceCreateInfo.pApplicationInfo = &m_appInfo;
    m_instanceCreateInfo.ppEnabledLayerNames = m_enabledLayers.data();
    m_instanceCreateInfo.enabledLayerCount = m_enabledLayers.size();
    m_instanceCreateInfo.ppEnabledExtensionNames = nullptr;
    m_instanceCreateInfo.enabledExtensionCount = 0;
    VkInstance m_instance;
    vkCreateInstance(&m_instanceCreateInfo,nullptr,&m_instance);
    vkDestroyInstance(m_instance,nullptr);
    return 0;
}