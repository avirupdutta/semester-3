#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n,fact=1,i;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if (n < 0)
    {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else
    {
        for(i=1;i<=n;i++)
        {
        fact=fact*i;
        }
        printf("Factorial of %d = %ld", n, fact);
    }
    return 0;
}
