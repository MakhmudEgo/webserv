//
// Created by Mahmud Jego on 2/22/21.
//

#include <iostream>
#include <sys/socket.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>

int main()
{
	int sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if (sockfd == -1)
	{
		std::cout << "Failed to create socket. errno: " << errno << std::endl;
		exit(EXIT_FAILURE);
	}

	sockaddr_in sockaddr;
	sockaddr.sin_family = AF_INET; // ipV4
	sockaddr.sin_port = htons(8000); // htons is necessary to convert a number to // порт
	sockaddr.sin_addr.s_addr = inet_addr("127.0.0.1"); // htonl(INADDR_ANY);
	// network byte order
	if (bind(sockfd, (struct sockaddr *) &sockaddr, sizeof(sockaddr)) < 0)
	{
		std::cout << "port zanyat " << errno << std::endl;
		exit(EXIT_FAILURE);
	}
	//		inet_aton() запрещено !!!
	// inet_addr("") не запрещено

	if (listen(sockfd, 10) < 0)
	{
		std::cout << "Failed to listen on socket. errno: " << errno << std::endl;
		exit(EXIT_FAILURE);
	}

	// Grab a connection from the queue
	int addrlen = sizeof(sockaddr);
	while (1)
	{
		int connection = accept(sockfd, (struct sockaddr *) &sockaddr, (socklen_t *) &addrlen);
		if (connection < 0) {
			std::cout << "Failed to grab connection. errno: " << errno << std::endl;
			exit(EXIT_FAILURE);
		}

		// Read from the connection
		char buffer[2048];
		int errr = recv(connection, buffer, 2048, MSG_PEEK);
		if (errr == -1)
			std::cout << "error" << std::endl;
//			int bytesRead = read(connection, buffer, 1024);
		std::cout << "The message was: " << buffer;
		bzero(buffer, 2048);
		// Send a message to the connection
		char msg[] = "hello from server\n";
		// write
		send(connection, msg, strlen(msg), 0);

		// Close the connections
		close(connection);
	}
	close(sockfd);
}