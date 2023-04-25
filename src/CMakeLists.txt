cmake_minimum_required(VERSION 3.0.0)
project(nnfs VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_OSX_ARCHITECTURES "arm64")

include(CTest)
enable_testing()

# Structure taken from: https://github.com/brainydexter/PublicCode/tree/master/cpp 
file(GLOB SOURCES "*.cpp")

# Generate the shared library from the sources
add_library(srcLib SHARED ${SOURCES})

# Specify that this library itself needs access to the folder "dataStructures/include" and that any
# other target which depends on this also gets similar access - i.e. use 'PUBLIC'
target_include_directories(srcLib PUBLIC include)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)