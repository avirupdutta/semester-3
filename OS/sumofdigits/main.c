#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,r,sum=0;
    printf("Enter any multidigit number:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    printf("Sum of digits is:%d",sum);
    return 0;
}
