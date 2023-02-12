//Q04.   Write a C program to find maximum between two numbers using switch case.
#include<stdio.h>
int main()
{
    int num1 , num2;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    switch(num1>num2)
    {
    case 1:
        printf("%d is maximum value.",num1);
        break;
    case 0:
        printf("%d is maximum value.",num2);
    }
 return 0;
}
