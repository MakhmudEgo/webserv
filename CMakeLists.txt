cmake_minimum_required(VERSION 3.17)
project(webserv)

set(CMAKE_CXX_STANDARD 98)
#set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")

include_directories(includes)

add_executable(webserv
        Server/webserv.cpp
        Client/Client.cpp
        Server/Server.cpp
#        Client/Client.hpp
#        Client/main.cpp
        Request/Request.cpp
        )

add_executable(test_parser
        Parser/test_parser.cpp
        Parser/Parser.cpp
        )

add_executable(Client
        Client/main.cpp
        Client/Client.cpp
        )
