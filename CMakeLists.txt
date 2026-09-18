cmake_minimum_required(VERSION 3.10)
project(pOne C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

file(GENERATE
        OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/aula1-2008.h"
        CONTENT "#include \"aula1_2008.h\"\n")

file(GENERATE
        OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/aula2-1709.h"
        CONTENT "#include \"aula2_1709.h\"\n")

add_executable(pOne
        main.c
        aula1_2008.c
        aula2_1709.c
        func_aux.c
        vetores.c)

target_include_directories(pOne PRIVATE
        "${CMAKE_CURRENT_BINARY_DIR}")
