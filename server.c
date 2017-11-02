#include "libsocket.h"

int main(int argc, char **argv)
{
	int serverfd,fd;
	socklen_t len,addrlen;
	struct sockaddr *addr;

	serverfd=tcp_listen(NULL,"1708",&addrlen);
	printf("fd=%d\n",serverfd);
	addr = malloc(addrlen);
	len=addrlen;
	fd=accept(serverfd,addr,&len);
	printf("fd=%d\n",fd);
	return 0;
}