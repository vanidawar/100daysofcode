//Q43: Write a program to check if a number is a strong number.//

#include <stdio.h>
int main()
{
    int n,temp,digit,sum=0;
    printf("enter number");
    scanf("%d",&n);
    temp=n;
    while (temp>0)
    {
        digit = temp % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) 
        {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if (sum==n)
    {
        printf("Strong number");
    } 
    else 
    {
        printf("Not strong number");
    }
    
}

