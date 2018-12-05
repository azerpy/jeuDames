cmake_minimum_required(VERSION 3.12)
project(JeuDames)

set(CMAKE_CXX_STANDARD 14)

add_executable(JeuDames main.cpp damier.cpp piece.cpp couleur.cpp joueur.cpp)