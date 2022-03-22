cmake_minimum_required(VERSION 3.0)

project(projectile)

file(GLOB SRCFILES src/*.cpp)

add_executable(projectile ${SRCFILES})