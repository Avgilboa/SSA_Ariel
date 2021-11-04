#include <math.h>
#include <stdio.h>
#include "NumClass.h"


int isArmstrong(int num)
{
    if(num<=0) {return 0;}
    double ndigit = numDigit(num);
    int sum = isArm(num, ndigit);
    if(num==sum)
    {
        return 1;

    }
    return 0;
}

int isArm(int num, int p)
{
    if(num==0)
    {
        return 0;
    }
    return (isArm(num/10 , p) + pow(num%10 , p));
}
int numDigit(int num)
{
    int n= num;
    int count =0;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    return count;
}

int isPalindrom(int num)
{
    if(num<=0)
    {
        return 0;
    }
    int rev = reversepal(num);
    while(num!=0)
    {
        if(num%10!=rev%10)
        {
            return 0;
        }
        num= num/10;
        rev = rev/10;
    }
    return 1;
    
}
int reversepal(int num)
{
    int temp =0;
    do
    {
        temp = temp*10 + num%10;
        num = num/10;
    }while(num!=0);
    return temp;
}
