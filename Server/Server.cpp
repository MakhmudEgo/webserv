//
// Created by Mahmud Jego on 2/25/21.
//

#include "Server.hpp"

Server::Server(char **av) {
	std::cout << "config file poka chto otsutstvuet" << std::endl;
}

Server::Server(const std::string &ip, int port)
: _sockFd(-1)
{
	this->_sockAddr.sin_family = AF_INET; // ipV4
	this->_sockAddr.sin_port = htons(port);
	this->_sockAddr.sin_addr.s_addr = inet_addr(ip.c_str());
}

int Server::getSocket()
{
	this->_sockFd = socket(AF_INET, SOCK_STREAM, 0);
	if (this->_sockFd == -1)
	{
		std::cout << "error: create socket, errno: " << strerror(errno) << std::endl;
		exit(EXIT_FAILURE);
	}
	int opt = 1;
	if (setsockopt(this->_sockFd, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt)) == -1)
	{
		std::cout << "error: setsockopt, errno: " << strerror(errno) << std::endl;
		exit(EXIT_FAILURE);
	}
	if (bind(this->_sockFd, (struct sockaddr *) &this->_sockAddr, sizeof(sockaddr)) == -1)
	{
		std::cout << "error: bind, maybe port busy, errno: " << strerror(errno) << std::endl;
		exit(EXIT_FAILURE);
	}
	if (listen(this->_sockFd, 10) < 0)
	{
		std::cout << "error: listen on socket. errno: " << strerror(errno) << std::endl;
		exit(EXIT_FAILURE);
	}
	return (this->_sockFd);
}

void Server::receive() {
	
}

void Server::toSend() {

}

void Server::newClient() {

}

int Server::getSockFd() const {
	return (this->_sockFd);
}

void Server::checkClients(fd_set &readFds, fd_set &writeFds, int &max_d)
{
	for (int i = 0; i < this->_clientsFd.size(); ++i)
	{

	}
}
