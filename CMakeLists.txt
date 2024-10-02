cmake_minimum_required(VERSION 3.23)
project(lanage_en_C C)

set(CMAKE_C_STANDARD 99)

add_executable(lanage_en_C main.c
        c_files/lexer.h
        c_files/lexer.c
        c_files/token.c)
