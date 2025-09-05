//Q31: Write a program to take a number as input and print its equivalent binary representation.//

#include <stdio.h>
int main() 
{
    int num,rem,bin=0,place=1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        rem=num%2;
        bin=bin+rem*place;
        place=place*10;
        num=num/2;
    }
    printf("Binary = %d", bin);
}