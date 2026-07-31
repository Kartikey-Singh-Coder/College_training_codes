cmake_minimum_required(VERSION 3.20)

project(C_Practice C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Collect every .c file inside src/ and all its subfolders
file(GLOB_RECURSE C_FILES
        CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c"
)

foreach(FILE ${C_FILES})

    # Extract filename without extension
    get_filename_component(NAME ${FILE} NAME_WE)

    # Create one executable per source file
    add_executable(${NAME} ${FILE})

    # Tell compiler where headers are
    target_include_directories(${NAME}
            PRIVATE
            ${CMAKE_CURRENT_SOURCE_DIR}/include
    )

endforeach()