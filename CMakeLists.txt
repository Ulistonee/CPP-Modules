cmake_minimum_required(VERSION 3.20)
project(CPP_Modules)

set(CMAKE_CXX_STANDARD 14)

FILE(GLOB CPP_SRC
		CPP_Module_03/ex03/*.cpp
		CPP_Module_03/ex03/*.hpp)

#include_directories(CPP_Module_01/ex01)

add_executable(CPP_Modules
	${CPP_SRC}
		)
