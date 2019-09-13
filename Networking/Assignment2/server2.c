#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define SERVER_PORT 7890
#define SERVER_IP "127.0.0.1"

int main()
{
    struct sockaddr_in serverAddress;
    struct sockaddr_storage serverStorage;
    socklen_t addr_size;
    int welcomeSocket, newSocket;

    char buffer[14];

    welcomeSocket=socket(PF_INET,SOCK_STREAM,0);
    if (welcomeSocket==-1)
    {
        printf("\nUnable to create the server socket......");
        return -1;
    }
    serverAddress.sin_family=AF_INET;
    serverAddress.sin_port=htons(SERVER_PORT);
    serverAddress.sin_addr.s_addr=inet_addr(SERVER_IP);

    bind(welcomeSocket,(struct sockaddr *)&serverAddress,sizeof(serverAddress));
    if (listen(welcomeSocket,5)==0)
    {
        printf("\nServer is waiting for the client to connect...\n");
    }
    else
    {
        printf("\nThe server is unable to listen to the client\n");
    }
    addr_size=sizeof(serverStorage);
    newSocket=accept(welcomeSocket,(struct sockaddr *)&serverStorage,&addr_size);

    strcpy(buffer,"Hello\n");

    send(newSocket,buffer,14,10);
    close(welcomeSocket);

    return 0;
}