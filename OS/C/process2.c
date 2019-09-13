#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void fork_test();
main()
{
	fork_test();
	//printf("Hello\n");
}

void fork_test()
{
	int x=1;
	if(fork()==0)
	{
		printf("Child has X=%d\n",++x);
	}
	else
	{
		printf("Parent has X=%d\n",--x);
	}
}