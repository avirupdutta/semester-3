#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

// prints the error and terminates the program
void error(const char *msg){
    perror(msg);
    exit(1);
}

int main(int argc, char const *argv[]) {
    
    // if no port num is provided, terminate the program
    if(argc < 2){
        fprintf(stderr," Port number not provided!");
        exit(1);
    }

    /* Abbbreviations:
    ====================
        sock -> socket
        fd-> file descriptor
    */
    int sockfd, newsockfd, portno;
    char buffer[255];
    
    struct sockaddr_in serv_addr, cli_addr;
    socklen_t client;

    // creating the socket
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    
    // checking if the creation was successfull or not
    if(sockfd < 0){
        error("Error opening socket");
    }

    // The function bzero() sets all values in a buffer to zero. It takes two arguments, the first is a pointer to the buffer and the second is the size of the buffer. Thus, this line initializes serv_addr to zeros.
    bzero((char *) &serv_addr, sizeof(serv_addr));

    // The port number on which the server will listen for connections is passed in as an argument, and this statement uses the atoi() function to convert this from a string of digits to an integer.
    portno = atoi(argv[1]);

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(portno);
    serv_addr.sin_addr.s_addr = INADDR_ANY;


    // binding
    if(bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0 ){
        error("Binding Failed!");
    }

    // The listen system call allows the process to listen on the socket for connections.
    listen(sockfd, 5);

    int clilen = sizeof(cli_addr);

    // The accept() system call causes the process to block until a client connects to the server.
    int newscocfd = accept(sockfd, (struct sockaddr *) &cli_addr, &clilen);

    if(newsockfd < 0){
        error("Error on Accept!");
    }

    while (1) {
        
        bzero(buffer, 256);
        int n = read(newsockfd, buffer, 255);

        if(n < 0)
            error("Error on reading!");
        
        // print the client's message on the console
        printf("client: %s \n", buffer);

        // clear the buffer
        bzero(buffer, 255);

        // prompt the server to write new message
        fgets(buffer, 255, stdin);

        // writes the server's message in the buffer
        // This code simply writes a short message to the client. The last argument of write is the size of the message.
        n = write(newsockfd, buffer, strlen(buffer));
        if(n < 0)
            error("Error on writing!");

        // check if the client wrote "Bye"... if so then stop the server
        int i = strncmp("Bye", buffer, 3);
        
        if (i == 0)
            break;
    }
    close(newsockfd);
    close(sockfd);
    
    return 0;
}

