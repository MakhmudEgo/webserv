//
// Created by Mahmud Jego on 3/1/21.
//

#include "Parser.hpp"
#include <istream>
Parser::Parser(const char *config) : _config(config)
{
	this->parsConfig();
}

void Parser::parsConfig()
{
	std::string line;
	std::ifstream file(this->_config);
	if (!file)
	{
		std::cerr << "error: not open" << this->_config << std::endl;
		exit(EXIT_FAILURE);
	}

	while (std::getline(file, line))
	{
		if (line[0] == '#')
		{
			continue ;
		}
		this->parsLine(line);
//		if (!file.eof())
//		{
//			ss << std::endl;
//		}
	}
//	std::cout << ss.str();
}

void Parser::parsLine(const std::string& line)
{
	std::string item;
	std::stringstream ss;
	ss << line;

	while (ss >> item)
	{
		if (item == "server" && this->stack.empty())
		{
			t_server *server = new t_server;
			this->servers.push_back(server);
		}
		else if (item == "server")
		{
			std::cerr << "error: pars" << std::endl;
			exit(EXIT_FAILURE);
		}
	}
}
