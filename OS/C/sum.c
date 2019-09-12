#include <stdio.h>

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
int main()
{
        int n;
        printf("Enter the no : ");
        scanf("%d",&n);
        int r=sum_of_the_digit(n);
        printf("The result is %d\n",r);
}
