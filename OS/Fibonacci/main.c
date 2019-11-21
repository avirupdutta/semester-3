#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int n, a=0, b=1, c;
    printf("Enter the value of nth term :\n");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for (int i=1;i<=n-2;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    getch();
    return 0;
}
