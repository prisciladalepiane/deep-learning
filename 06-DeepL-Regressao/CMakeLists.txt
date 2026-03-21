cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(ModeloCpp)

find_package(Torch REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TORCH_CXX_FLAGS}")

add_executable(ModeloCpp ModeloCpp.cpp)
target_link_libraries(ModeloCpp "${TORCH_LIBRARIES}")
set_property(TARGET ModeloCpp PROPERTY CXX_STANDARD 17)
