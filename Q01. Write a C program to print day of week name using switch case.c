//Q01. Write a C program to print day of week name using switch case.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter day number(1-7) : ");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
         printf("Tuesday");
        break;
    case 3:
         printf("Wednesday");
        break;
    case 4:
         printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Please enter number between (1-7)");


    }
    return 0;
}
