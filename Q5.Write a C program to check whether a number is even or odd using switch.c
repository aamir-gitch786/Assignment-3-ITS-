//5.Write a C program to check whether a number is even or odd using switch case.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    switch(n&1)
    {
    case 1:
        printf("%d is odd number",n);
        break;
    case 0:
        printf("%d is even number",n);

    }
   return 0;
}
