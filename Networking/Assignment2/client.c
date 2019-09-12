#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define SERVER_PORT 7890
#define SERVER_IP "127.0.0.1"

#define SUCCESS 0
#define FAILURE -1

int main()
{
    struct sockaddr_in serverAddress;
    socklen_t addressSize;
    int clientSocket;

    char buffer[1024];
    clientSocket=socket(PF_INET,SOCK_STREAM,0);
    if (clientSocket==-1)
    {
        printf("Unable to create the client side socket\n");
        return FAILURE;
    }
    serverAddress.sin_family=AF_INET;
    serverAddress.sin_port=htons(SERVER_PORT);
    serverAddress.sin_addr.s_addr=inet_addr(SERVER_IP);

    addressSize=sizeof(serverAddress);

    connect(clientSocket,(struct sockaddr *)&serverAddress,addressSize);
    recv(clientSocket,buffer,1024,0);
    printf("\nCLient Received from server: %s",buffer);
    close(clientSocket);
    
    return SUCCESS;
}