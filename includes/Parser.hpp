//
// Created by Mahmud Jego on 3/1/21.
//

#ifndef PARSER_HPP
#define PARSER_HPP

#include "Server.hpp"

class Parser {
public:
	Parser(const char*);
private:
	std::vector<t_server*> servers;
	std::stack<char> stack;
	const char *_config;

	void parsLine(const std::string& line);
	void parsConfig();
};


#endif //PARSER_HPP
