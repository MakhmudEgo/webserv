//
// Created by Mahmud Jego on 3/1/21.
//

#ifndef PARSER_HPP
#define PARSER_HPP

#include "Server.hpp"

class Parser {
public:
	Parser(char*);
private:
	std::vector<t_server> servers;
};


#endif //PARSER_HPP
