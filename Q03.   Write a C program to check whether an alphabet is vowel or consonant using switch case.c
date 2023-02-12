//Q03.   Write a C program to check whether an alphabet is vowel or consonant using switch case.
#include<stdio.h>
int main()
{
    char a;
    printf("Enter the character : ");
    scanf("%c",&a);
    switch(a)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("%c is a vowel.",a);
        break;
    default:
        printf("%c is a consonant",a);
    }
    return 0;
}
