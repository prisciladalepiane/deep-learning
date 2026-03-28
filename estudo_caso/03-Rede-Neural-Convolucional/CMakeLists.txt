cmake_minimum_required(VERSION 3.1)

project(
    RedeNeuralConvolucional
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -O2 -g")

add_executable(dsatreino 
    src/treino.cpp
    src/modelo.hpp
    src/dataset.hpp
)
target_compile_definitions(treino PUBLIC NDEBUG)

add_executable(testeunitario 
    src/testeunitario.cpp
    src/modelo.hpp
)