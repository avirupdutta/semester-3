#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

main()
{
	fflush(stdin);
	fork();
	fork();
	fork();
	printf("Hello\n");
}
