//
// Created by Mahmud Jego on 3/1/21.
//

#include "Parser.hpp"
#include <ostream>
Parser::Parser(char *config)
{
	std::string line;
	std::ifstream Config(config);
	if (!Config)
	{
		std::cout << "error: not open " << config << std::endl;
		exit(EXIT_FAILURE);
	}
	std::stringstream hello;

	while (std::getline(Config, line))
	{
		hello << line;
		std::cout << hello.str() << std::endl;
	}
//	 std::getline(Config, line);
//	std::cout << line << std::endl;
}
