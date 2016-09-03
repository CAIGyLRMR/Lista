cmake_minimum_required(VERSION 2.8.9)
project(Lista)

include directories(include)
set (SOURCES src/Lista.cpp src/main.cpp src/Nodo.cpp)

add executable(Lista ${SOURCES})