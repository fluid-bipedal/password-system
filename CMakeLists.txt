# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(PasswordEncoder)

set(CMAKE_CXX_STANDARD 14)

add_executable(PasswordEncoder main.cpp password_encoder.cpp utils.cpp)
