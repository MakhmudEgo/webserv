//
// Created by Mahmud Jego on 2/25/21.
//

#ifndef SERVER_HPP
#define SERVER_HPP

#include "Request.hpp"

class Server {
public:
	Server(char **av);
	Server(const std::string& ip, int port);
	int getSocket();
	void receive();

	void checkClients(fd_set& readFds, fd_set& writeFds, int& max_d);
	int getSockFd() const;

	void toSend();
	void newClient();

private:
	std::vector<int> _clientsFd;
	int _sockFd;
	sockaddr_in _sockAddr;
	Request _request;
};


#endif //SERVER_HPP
