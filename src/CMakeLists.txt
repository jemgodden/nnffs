# Structure taken from: https://github.com/brainydexter/PublicCode/tree/master/cpp 
file(GLOB_RECURSE SOURCES "*.cpp")

add_library(src SHARED ${SOURCES})

target_include_directories(src PUBLIC include)