#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void fork_test();
main()
{
	fork_test();
	printf("Hello\n");
}

void fork_test()
{
	if(fork()==0)
	{
		printf("Hello from child\n");
	}
	else
	{
		printf("Hello from Parent\n");
	}
}