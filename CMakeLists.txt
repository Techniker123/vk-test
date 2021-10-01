cmake_minimum_required(VERSION 3.21)

project(vktest)

find_package(Vulkan REQUIRED)

add_executable(vktest main.cpp)

if(VULKAN_FOUND)
    target_link_libraries(vktest PUBLIC ${Vulkan_LIBRARIES})
    target_include_directories(vktest PUBLIC ${Vulkan_INCLUDE_DIRS})
    
endif()
