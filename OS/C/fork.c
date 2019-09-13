#include <stdio.h>

int main()
{
	int n,i;
	printf("Enter  a no.\n");
	scanf("%d",&n);
	for (i = 0; i < n; ++i)
	{
		fork();
	}
	printf("Hello\n");
	return 0;
}