cmake_minimum_required(VERSION 3.20.3)

project(testBuild)
add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(external/glfw)
target_link_directories(${PROJECT_NAME} PRIVATE external/glfw/src)
target_include_directories(${PROJECT_NAME} PUBLIC external/glwf/include)
target_link_libraries(${PROJECT_NAME} glfw)

