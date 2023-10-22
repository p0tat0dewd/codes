cmake_minimum_required(VERSION 3.26)
project(QuizProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(QuizProject main.cpp
        Question.h
        Person.h
        Student.h)
