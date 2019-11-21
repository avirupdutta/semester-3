#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int ch,n,a=0,b=1,c,n3,r,rev=0,n4,r2,sum=0,flag=1;
    long int n2,fact=1,i;
    while(1)
    {
    printf("Hit 1 for Fibonacci series.\n");
    printf("Hit 2 for Factorial of a number.\n");
    printf("Hit 3 for Reverse of a number.\n");
    printf("Hit 4 for Sum of digits.\n");
    printf("Hit 5 for Exit.\n");
    scanf("%d",&ch);
    printf("\n");
    switch(ch)
    {
    case 1:
        a=0;
        b=1;
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
        printf("\n\n");
        break;
    case 2:
        fact=1;
        printf("Enter an integer: ");
        scanf("%ld",&n2);
        if (n2 < 0)
        {
            printf("Error! Factorial of a negative number doesn't exist.\n\n");
        }
        else
        {
            for(i=1;i<=n2;i++)
            {
                fact=fact*i;
            }
            printf("Factorial of %ld = %ld", n2, fact);
            printf("\n\n");
        }
            break;
    case 3:
        rev=0;
        printf("Enter any multidigit number:\n");
        scanf("%d",&n3);
        while(n3!=0)
        {
            r=n3%10;
            n3=n3/10;
            rev=rev*10+r;
        }
        printf("Reverse is:%d",rev);
        printf("\n\n");
        break;
    case 4:
        sum=0;
        printf("Enter any multidigit number:\n");
        scanf("%d",&n4);
        while(n4!=0)
        {
            r2=n4%10;
            n4=n4/10;
            sum=sum+r2;
        }
        printf("Sum of digits is:%d",sum);
        printf("\n\n");
        break;
    case 5:
        exit(0);
    default:
        printf("Invalid Entry. Hit ENTER to try again!");
        printf("\n\n");
        break;
    }}
    return 0;
}
