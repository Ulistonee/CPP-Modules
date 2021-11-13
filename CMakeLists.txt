cmake_minimum_required(VERSION 3.20)
project(CPP_Modules)

set(CMAKE_CXX_STANDARD 14)

FILE(GLOB CPP_SRC
		CPP_Module_04/ex01/*.cpp
		CPP_Module_04/ex01/*.hpp)

add_executable(CPP_Modules
	${CPP_SRC}
		)
