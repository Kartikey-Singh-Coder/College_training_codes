cmake_minimum_required(VERSION 3.20)

project(college_codes C)

set(CMAKE_C_STANDARD 11)

file(GLOB PRACTICE_FILES
        CONFIGURE_DEPENDS
        "${CMAKE_CURRENT_SOURCE_DIR}/src/*.c")

foreach(FILE ${PRACTICE_FILES})

    get_filename_component(NAME ${FILE} NAME_WE)

    add_executable(${NAME} ${FILE})

endforeach()