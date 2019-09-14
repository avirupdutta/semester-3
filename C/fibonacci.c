#include <stdio.h>

void fibonacci(int n)
{
        int a=0,b=1,c=0,i=0;
        printf("%d,",a);
        printf("%d,",b);
        for(i=0;i<(n-2);i++)
        {
                c=a+b;
                printf("%d,",c);
                a=b;
                b=c;
        }
        printf("\n");
}
int main()
{
        int n;
        printf("Enter the limit : ");
        scanf("%d",&n);
        fibonacci(n);
}
