#include <stdio.h>

int main()
{
        char gender, mstatus;
        int age;
        
        printf("Enter your Age \n");
        scanf("%d", &age);
        printf("Enter your Gender \n");
        scanf("%c", &gender);
        scanf("%c", &gender);
        printf("Enter your Marital Status \n");
        scanf("%c", &mstatus);
        scanf("%c", &mstatus);
        
        if((gender=='f'&&age>=18&&mstatus=='u')||(gender=='m'&&age>=21&&mstatus=='u'))
        {
                printf("Yes, you can get license\n");
        }
        else
        {
                printf("No, you can't get license\n");
        }
        return 0;
}
