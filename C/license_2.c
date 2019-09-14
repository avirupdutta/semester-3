#include <stdio.h>

int main()
{
        char gender, mstatus,x;
        int age;
        
        printf("Enter your Age \n");
        scanf("%d", &age);
        printf("Enter your Gender \n");
        scanf("%c", &x);
        scanf("%c", &gender);
        printf("Enter your Marital Status \n");
        scanf("%c", &x);
        scanf("%c", &mstatus);
        
        ((gender=='f'&&age>=18&&mstatus=='u')||(gender=='m'&&age>=21&&mstatus=='u'))?printf("Yes, you can get license\n"):printf("No, you can't get license\n");
        return 0;
}
