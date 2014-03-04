#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <errno.h>
#include <strings.h>
#include <unistd.h>

#define SERVER_SOCKET_FILE "/tmp/server.sock"
#define CLIENT_SOCKET_FILE "/tmp/client.sock"

int main(){
	int clt;
	int i;
    	static char file_to_get[256];
    	printf("What file should I get?: ");
    	scanf("%s", file_to_get);
	printf("\n");
	struct sockaddr_un server_addr;
	struct sockaddr_un client_addr;


	// we set the client address
	memset(&client_addr, 0, sizeof(client_addr));
	client_addr.sun_family = AF_UNIX;
	strncpy(client_addr.sun_path, CLIENT_SOCKET_FILE, 104);

	// we set the server address
	memset(&server_addr, 0, sizeof(server_addr));
	server_addr.sun_family = AF_UNIX; // this is a local socket, we are on our machine not using the network yet!
	strncpy(server_addr.sun_path, SERVER_SOCKET_FILE, 104);

	// fork create a new process, look online if you do not understand!
	//if(fork()==0){ // child process
	if(1){
		clt = socket(AF_UNIX, SOCK_SEQPACKET, 0); // we create a socket
		if(clt<0){
        	printf("Socket failed %d\n", errno);
			return -1;
		}
		unlink(client_addr.sun_path); // we make sure our file is free
		if(bind(clt, (struct sockaddr *)&client_addr, sizeof(client_addr))<0){ // we tell it to associate our address with that socket
			close(clt);
			printf("Bind failed %d\n", errno);
			return -1;
		}
		if (connect(clt, (struct sockaddr *)&server_addr, sizeof(server_addr))<0){ // we connect to the server
			close(clt);
			printf("Connect failed %d\n", errno);
			return -1;
		}
		send(clt, &file_to_get, strlen(file_to_get)+1, 0); // we send a request 
		while(1){ // we send data!			
			i = recv(clt, &file_to_get, 256, MSG_WAITALL); // we read the answer
			if (i<=0) break;
			printf("%s",file_to_get);
		}
		close(clt); // we close the socket
    }
	return 0;
}
