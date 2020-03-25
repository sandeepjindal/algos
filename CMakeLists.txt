cmake_minimum_required(VERSION 3.16)

project(main)

add_executable(main main.cpp)

install(TARGETS main)

enable_testing()
add_test(NAME main COMMAND main)
© 2020 GitHub, Inc.
