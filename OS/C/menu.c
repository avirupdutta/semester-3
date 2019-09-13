#include <stdio.h>

int factorial(int x)
{
        int f=1,i;
        if (x>0)
        {
                for(i=1;i<=x;i++)
                {
                        f=f*i;
                }
                return f;
        }
        else{
                printf("Factorial of negative number is not possible");
                return 0;
        } 
}

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

int sum_of_the_digit(int n)
{
        int s=0;
        while(n!=0)
        {
                int d=n%10;
                s=s+d;
                n=n/10;
        }
        return s;
}

int reverse(int x)
{
        int r=0;
        while(x!=0)
        {
                r=(r*10)+(x%10);
                x/=10;
        }
        return r;
}

int main()
{
        int choice,n,x;
        printf("Enter 1 for Fibonacci Series\n");
        printf("Enter 2 for Factorial\n");
        printf("Enter 3 for Sum of digit\n");
        printf("Enter 4 for Reverse No.\n");
        scanf("%d",&choice);
        switch(choice)
        {
                case 1:
                printf("Enter the limit\n");
                scanf("%d",&n);
                fibonacci(n);
                break;
                case 2:
                printf("Enter the limit\n");
                scanf("%d",&n);
                x=factorial(n);
                printf("%d",x);
                break;
                case 3:
                printf("Enter the limit\n");
                scanf("%d",&n);
                x=sum_of_the_digit(n);
                printf("%d",x);
                break;
                case 4:
                printf("Enter the limit\n");
                scanf("%d",&n);
                x=reverse(n);
                printf("%d",x);
                break;
                default:
                printf("Nahi Hoga");
        }
        return 0;
}
        
        
