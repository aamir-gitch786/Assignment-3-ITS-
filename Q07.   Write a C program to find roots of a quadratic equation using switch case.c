//Q07.   Write a C program to find roots of a quadratic equation using switch case.
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter three values : ");
    scanf("%d%d%d",&a,&b,&c);
    a=sqrt(pow(b,2)-4*a*c);
    switch(a<0)
    {
    case 1:
        printf("Roots are imaginary");
        break;
    case 0:
        switch(a>0)
        {
        case 1:
            printf("Roots are real and distinct .");
            break;
        case 0:
            printf("Roots are real and equal");
        }
    }
    return 0;
}
