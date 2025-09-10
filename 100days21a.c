//Q41: Write a program to swap the first and last digit of a number.//

#include <stdio.h>
int main()
{
    int n,num,last,pow,digits,middle,first;
    printf("Enter a number: ");
    scanf("%d", &n);
    num = n;
    last = num % 10;
    while (num >= 10) 
    {
        num/=10;
        pow*=10;
        digits++;
    }
    first = num;        
    middle = n % pow;       
    middle = middle/10;     
    int result = last * pow + middle * 10 + first;
    printf("result: %d", result);
}