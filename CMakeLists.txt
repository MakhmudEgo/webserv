cmake_minimum_required(VERSION 3.17)
project(webserv)

set(CMAKE_CXX_STANDARD 98)
#set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")

add_executable(webserv
        Server/webserv.cpp
        Webserv.cpp
        Webserv.hpp
        Client/Client.cpp
        Client/Client.hpp
        Client/main.cpp
        )

add_executable(Client
        Client/main.cpp
        Client/Client.cpp
        )
