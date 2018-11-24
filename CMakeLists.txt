cmake_minimum_required (VERSION 2.6)

project (myTermoCMakeEclipse)

file(GLOB SOURCES "src/*.cpp")

add_executable(myTermo ${SOURCES})
