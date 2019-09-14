#include <stdio.h>

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
        int n;
        printf("Enter a no : ");
        scanf("%d",&n);
        int res=reverse(n);
        printf("The result is %d \n",res);        
}
