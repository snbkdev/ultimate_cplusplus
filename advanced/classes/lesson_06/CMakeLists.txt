cmake_minimum_required(VERSION 4.3)
project(lesson_06)

set(CMAKE_CXX_STANDARD 20)

add_executable(lesson_06 main.cpp
        Rectangle.cpp
        Rectangle.h
        TextBox.cpp
        TextBox.h)
