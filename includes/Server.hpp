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

	void checkClientsBefore(fd_set& readFds, fd_set& writeFds, int& max_d);
	void checkClientsAfter(fd_set& readFds, fd_set& writeFds, int& max_d);

	int Select(fd_set& readFds, fd_set& writeFds, int& max_d) const;
	int getSockFd() const;
	void newClient();

	void toSend(int&);
	void receive(int);

private:
	std::vector<int> _clientsFd;
	int _sockFd;
	sockaddr_in _sockAddr;
	Request _request;
	char _buffer[2048];
};


#endif //SERVER_HPP
