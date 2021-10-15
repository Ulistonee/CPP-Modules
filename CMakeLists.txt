cmake_minimum_required(VERSION 3.20)
project(CPP_Modules)

set(CMAKE_CXX_STANDARD 14)

include_directories(CPP_Module_01/ex01)

add_executable(CPP_Modules
        CPP_Module_01/ex06/Karen.cpp
        CPP_Module_01/ex06/Karen.hpp
        CPP_Module_01/ex06/main.cpp
        CPP_Module_01/ex00/main.cpp
        CPP_Module_01/ex00/newZombie.cpp
        CPP_Module_01/ex00/Zombie.cpp
        CPP_Module_01/ex00/Zombie.hpp
        CPP_Module_01/ex03/Weapon.cpp
        CPP_Module_01/ex03/Weapon.hpp
        CPP_Module_01/ex03/main.cpp
        CPP_Module_01/ex03/HumanA.cpp
        CPP_Module_01/ex03/HumanA.hpp
        CPP_Module_01/ex03/HumanB.hpp
        CPP_Module_01/ex03/HumanB.cpp

        )
