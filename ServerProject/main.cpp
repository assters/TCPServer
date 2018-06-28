#include "SServer.h"

int main()
{
	SServer* server = new SServer();
	server->port = 5444;
	server->startServer();
	return 0;
}