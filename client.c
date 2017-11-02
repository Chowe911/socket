#include "libsocket.h"

int main(int argc, char **argv)
{
	int fd;
	fd=tcp_connect("192.168.16.2","1708");

	printf("fd=%d\n",fd);
	return 0;
}