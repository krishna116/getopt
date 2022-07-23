cmake_minimum_required(VERSION 3.10)

project(getopt LANGUAGES C CXX)

add_executable(test test.cpp getopt.c)