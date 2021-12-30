cmake_minimum_required(VERSION 3.8)

file(GLOB_RECURSE INGENIUM_HEADERS ${CMAKE_CURRENT_SOURCE_DIR}/Ingenium/*.h)
file(GLOB_RECURSE INGENIUM_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/Ingenium/*.c)

add_definitions(-D_CRT_SECURE_NO_WARNINGS)

add_library(Ingenium ${INGENIUM_HEADERS} ${INGENIUM_SOURCES})
target_include_directories(Ingenium PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})