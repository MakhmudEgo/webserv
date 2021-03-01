//
// Created by Mahmud Jego on 2/25/21.
//

#ifndef INCLUDES_H
#define INCLUDES_H
#include <iostream>
#include <fstream>
#include <regex>
//#include <sstream>
//#include <ostream>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>
#include <stack>
#include <deque>
#include <list>

typedef struct s_data_parser {
	//	serverItems
	std::map<std::string, std::vector<std::string> > serverItems;

	// path data
	std::vector<std::string> locations;

	// map<locations, vector<locations elem> >
	std::map<std::string, std::vector<std::string> > locationsData;
} t_server;

#endif //INCLUDES_H
