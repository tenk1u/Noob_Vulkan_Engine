cmake_minimum_required(VERSION 3.27)
project(noobVE)

set(CMAKE_CXX_STANDARD 20)
find_package(Vulkan REQUIRED)

add_subdirectory(Lib/glfw-3.4 EXCLUDE_FROM_ALL)
SET(GLM_TEST_ENABLE OFF CACHE BOOL "GLM Build unit tests")
add_subdirectory(Lib/glm-1.0.1 EXCLUDE_FROM_ALL)

add_executable(${PROJECT_NAME} main.cpp
        nveWindow.hpp
        nveWindow.cpp
        firstApp.cpp
        firstApp.hpp
)

target_link_libraries(${PROJECT_NAME} glfw ${GLFW_LIBRARIES} Vulkan::Vulkan glm::glm)
