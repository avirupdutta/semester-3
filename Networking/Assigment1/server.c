#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>

int main()
{
    int sockid;
    struct sockaddr_in addport;

    sockid=socket(PF_INET,SOCK_STREAM,0);
    addport.sin_family=AF_INET;
    addport.sin_port=htons(5100);
    addport.sin_addr.s_addr=htonl(INADDR_ANY);

    if (bind(sockid,(struct sockaddr *)&addport,sizeof(addport))==-1)
    {
        printf("Unable to bind\n");
    }
    else
    {
        printf("Binding done\n");
    }
    int status=close(sockid);
    if (status==-1)
    {
        printf("Unable to Close\n");
    }
    else
    {
        printf("Closed\n");
    }
    return 0;
}