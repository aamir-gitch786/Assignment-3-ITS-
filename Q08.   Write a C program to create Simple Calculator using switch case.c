//Q08.   Write a C program to create Simple Calculator using switch case.
#include<stdio.h>
int main()
{   int choice,a,b;
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Divison\n");
    printf("Dear user ! please enter your choice : \n");
    scanf("%d",&choice);

    switch(choice<3)
    {
    case 1:
        switch(choice==1)
        {
        case 1:
            printf("Enter two numbers : ");
            scanf("%d%d",&a,&b);
            printf("Addition of %d and %d is %d",a,b,a+b);
            break;
        case 0:
            printf("Enter two numbers : ");
            scanf("%d%d",&a,&b);
            printf("Subtraction of %d and %d is %d",a,b,a-b);
            break;
        }
        break;
    case 0:
         switch(choice==3)
        {
        case 1:
            printf("Enter two numbers : ");
            scanf("%d%d",&a,&b);
            printf("Multiplication of %d and %d is %d",a,b,a*b);
            break;
        case 0:
            printf("Enter two numbers : ");
            scanf("%d%d",&a,&b);
            (b==0)? printf("Invalid input !"):
            printf("Divison of %d and %d is %d",a,b,a/b);
            break;
        }
    }
    return 0;
}
