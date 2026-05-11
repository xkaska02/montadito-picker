cmake_minimum_required(VERSION 3.15) # number from tutorial website

project(
    MontaditoPicker
    VERSION 1.0
    LANGUAGES CXX
)

set(SOURCE_FILES main.cpp Montadito.cpp Ingredient.cpp)

add_executable(main ${SOURCE_FILES})