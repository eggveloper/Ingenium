cmake_minimum_required(VERSION 3.8)

add_executable(Sandbox Editor/main.c)

target_include_directories(Sandbox PUBLIC "Ingenium")
target_link_directories(Sandbox PUBLIC Ingenium)

add_definitions(-D_CRT_SECURE_NO_WARNINGS)