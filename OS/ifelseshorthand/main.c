#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int age;
    char mar,gen;
    printf("Enter your age: \n");
    scanf("%d",&age);
    printf("Enter your gender: \nPress (m) if you are Male.\nPress (f) if you are Female.\n");
    scanf(" %c",&gen);
    printf("Enter your marital status: \nPress (m) if you are Married.\nPress (u) if you are Unmarried\n");
    scanf(" %c",&mar);
    mar=='u'?(gen=='m'?(age>=21?printf("You are elligible for Driving License1."):printf("You are not elligible for Driving License1.")):(gen=='f'?(age>=18?printf("You are elligible for Driving License2."):printf("You are not elligible for Driving License2.")):printf("You are not elligible for Driving License3."))):printf("You are not elligible for Driving License4.");
    return 0;
}
