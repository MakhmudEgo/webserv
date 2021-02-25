//
// Created by Mahmud Jego on 2/25/21.
//

#include "Server.hpp"
volatile bool loop = true;

int main(int ac, char **av)
{
	Server server("127.0.0.1", 8000);
	int max_d = server.getSocket();

	while (loop)
	{
		fd_set readFds, writeFds;
		FD_ZERO(&readFds); // clean set
		FD_ZERO(&writeFds); // clean set
		FD_SET(server.getSockFd(), &readFds);

		server.checkClients(readFds, writeFds, max_d);
		for (int i = 0; i < server.; ++i) {
			
		}

	}
}