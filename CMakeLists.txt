cmake_minimum_required(VERSION 3.30)
project(TSP_GeneticAlgorithm)

set(CMAKE_CXX_STANDARD 20)

add_executable(TSP_GeneticAlgorithm src/app/main.cpp
        inc/structures/Graph.h
        src/structures/Graph.cpp
        inc/algorithms/GeneticAlgorithm.h
        src/algorithms/GeneticAlgorithm.cpp)

target_include_directories(TSP_GeneticAlgorithm PRIVATE inc)