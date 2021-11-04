#include <stdio.h>
#include "NumClass.h"
int main()
{
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
    {
        int temp = a;
        a=b;
        b=temp;
    }
    printf("The Armstrong numbers are:");
    printArm(a,b);
    printf("The Palindromes are:");
    printPal(a,b);
    printf("The Prime numbers are:");
    printPrime(a,b);
    printf("The Strong numbers are:");
    printStrong(a,b);
    printf("\n");
return 0;
}

void printPrime(int a, int b)
{
        for (int i=a; i<=b;i++)
    {
        if(isPrime(i)==1)
        {
            printf(" %d", i);
        }
    }
    printf("\n");
}
void printArm(int a, int b)
{
    {
        for (int i=a; i<=b;i++)
    {
        if(isArmstrong(i)==1)
        {
            printf(" %d", i);
        }
    }
    printf("\n");
}
}
void printStrong(int a, int b)
{
        for (int i=a; i<=b;i++)
    {
        if(isStrong(i)==1)
        {
            printf(" %d", i);
        }
    }
    printf("\n");
}
void printPal(int a, int b)
{
        for (int i=a; i<=b;i++)
    {
        if(isPalindrom(i)==1)
        {
            printf(" %d", i);
        }
    }
    printf("\n");
}