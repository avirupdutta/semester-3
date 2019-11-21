#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char gen,mstat;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("\nEnter your gender(m/f): ");
    scanf(" %c",&gen);
    printf("\nEnter your martial status(m/u): ");
    scanf(" %c",&mstat);
    ((gen=='f' && age>=18 && mstat=='u')||(gen=='m' && age>=21 && mstat=='u'))? printf("\nYou are eligible for driving license"): printf("\nYou are not eligible for driving license");
    return 0;
}
