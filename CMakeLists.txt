cmake_minimum_required(VERSION 3.15) # number from tutorial website

project(
    MontaditoPicker
    VERSION 1.0
    LANGUAGES CXX
)



# set(SOURCE_FILES src/main.cpp src/Montadito.cpp src/Ingredient.cpp src/DataManipulator.cpp src/Alergen.cpp)

add_executable(main_cli src/CLI/main.cpp)

add_library(Core

        src/Core/Alergen.hpp
        src/Core/DataManipulator.hpp
        src/Core/Ingredient.hpp
        src/Core/Montadito.hpp

        src/Core/Alergen.cpp
        src/Core/DataManipulator.cpp
        src/Core/Ingredient.cpp
        src/Core/Montadito.cpp
)

target_include_directories(Core PUBLIC src)

target_link_libraries(main_cli PRIVATE Core)