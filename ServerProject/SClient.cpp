#include "SClient.h"



SClient::SClient(SOCKET s, SOCKADDR_IN sock_in)
{

	c_sock = s;
	c_addr = sock_in;
	printf("Client created\n");
	handle();
}


SClient::~SClient()
{
}

void SClient::handle()
{
	//while (true)
	//{
		int k = recv(c_sock, buffer, sizeof(buffer), NULL);
		printf("%s\n", buffer);
		Sleep(30);
	//}
}
