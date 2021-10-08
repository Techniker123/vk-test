cmake_minimum_required(VERSION 3.21)

project(vktest)

find_package(Vulkan)
set(SRC_FILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/VkErrorHandler.cxx
)

add_executable(vktest ${SRC_FILES} main.cpp)
target_compile_options(vktest PUBLIC  -std=c++2a -fmodules)

if(VULKAN_FOUND)
    target_link_libraries(vktest PUBLIC ${Vulkan_LIBRARIES})
    target_include_directories(vktest PUBLIC ${Vulkan_INCLUDE_DIRS})
    set(VULKAN_PRESENT true)
else()
    set(VULKAN_PRESENT false)
endif()
target_include_directories(vktest PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/include/ConfigFile.hpp.in ${CMAKE_CURRENT_SOURCE_DIR}/include/ConfigFile.hpp)