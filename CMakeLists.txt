cmake_minimum_required(VERSION 3.0.0)
project(nnffs VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_OSX_ARCHITECTURES "arm64")

# include(CTest)
# enable_testing()

add_subdirectory(src)

include_directories(
    "${CMAKE_SOURCE_DIR}/libs/gtest/include"
    "${CMAKE_SOURCE_DIR}/libs/glog/include"
    "${CMAKE_SOURCE_DIR}/libs/gflags/include"
)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC 
    src 
    "${CMAKE_SOURCE_DIR}/libs/gtest/lib/libgtest.a"
    "${CMAKE_SOURCE_DIR}/libs/glog/lib/libglog.a"
    "${CMAKE_SOURCE_DIR}/libs/gflags/lib/libgflags.a"
)
target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_BINARY_DIR}/src" "${PROJECT_BINARY_DIR}/libs/glog/include")
