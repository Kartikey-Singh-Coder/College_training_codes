cmake_minimum_required(VERSION 3.20)

project(CPP_Practice CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Collect every .cpp file inside src/ and all subfolders
file(GLOB_RECURSE CPP_FILES
        CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
)

foreach(FILE ${CPP_FILES})

    # Get filename without extension
    get_filename_component(NAME ${FILE} NAME_WE)

    # Create one executable per source file
    add_executable(${NAME} ${FILE})

    # Include headers
    target_include_directories(${NAME}
            PRIVATE
            ${CMAKE_CURRENT_SOURCE_DIR}/include
    )

endforeach()