#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,r,rev=0;
    printf("Enter any multidigit number:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    printf("Reverse is:%d",rev);
    return 0;
}
