cmake_minimum_required(VERSION 3.20)

project(CPP_Practice CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

file(GLOB_RECURSE CPP_FILES
        CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
)

add_executable(CPP_Practice ${CPP_FILES})

target_include_directories(CPP_Practice
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)