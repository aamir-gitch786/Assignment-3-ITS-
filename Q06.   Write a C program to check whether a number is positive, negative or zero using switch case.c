//Q06.   Write a C program to check whether a number is positive, negative or zero using switch case.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);

  switch(n<0)
  {
  case 1:
    printf("%d is negative number .",n);
    break;
  case 0:
    switch(n>0)
      {
      case 1:
        printf("%d is positive number.",n);
        break;
      case 0:
        printf("%d is zero",n);
      }
  }
  return 0;
}
