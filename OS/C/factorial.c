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
int main()
{
        int n;
        printf("Enter the number:  ");
        scanf("%d",&n);
        int f=factorial(n);
        printf("\nThe factorial is %d \n",f);
}
