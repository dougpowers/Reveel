cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

project("reveel")

add_executable(reveel src/reveel.cpp)

find_package(Curses REQUIRED)

target_link_libraries("reveel" ${CURSES_LIBRARIES})

include_directories(${CURSES_INCLUDE_DIR})
