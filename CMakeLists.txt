cmake_minimum_required(VERSION 3.20)
project(CPP_Modules)

set(CMAKE_CXX_STANDARD 14)

include_directories(CPP_Module_01/ex01)

add_executable(CPP_Modules
        CPP_Module_02/ex00/Fixed.cpp
        CPP_Module_02/ex00/Fixed.hpp
        CPP_Module_02/ex00/main.cpp
#		CPP_Module_02/ex01/Fixed.cpp
#		CPP_Module_02/ex01/Fixed.hpp
#		CPP_Module_02/ex01/main.cpp
		)
