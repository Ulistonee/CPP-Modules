cmake_minimum_required(VERSION 3.20)
project(CPP_Modules)

set(CMAKE_CXX_STANDARD 14)

include_directories(CPP_Module_01/ex00)

add_executable(CPP_Modules
        CPP_Module_01/ex00/main.cpp
        CPP_Module_01/ex00/newZombie.cpp
        CPP_Module_01/ex00/randomChump.cpp
        CPP_Module_01/ex00/Zombie.cpp
        CPP_Module_01/ex00/Zombie.hpp)
