cmake_minimum_required(VERSION 3.21)

project(vktest)

find_package(Vulkan REQUIRED)
set(SRC_FILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/VkErrorHandler.cxx
)

add_executable(vktest ${SRC_FILES} main.cpp)
target_compile_options(vktest PUBLIC  -std=c++2a -fmodules-ts)

if(VULKAN_FOUND)
    target_link_libraries(vktest PUBLIC ${Vulkan_LIBRARIES})
    target_include_directories(vktest PUBLIC ${Vulkan_INCLUDE_DIRS})
    
endif()
