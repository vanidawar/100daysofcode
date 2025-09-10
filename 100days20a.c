//Q39: Write a program to find the product of odd digits of a number.//

#include <stdio.h>
int main() 
{
    int n, digit, prod = 1;
    printf("Enter a number");
    scanf("%d",&n);
    while (n > 0) 
    {
        digit = n%10;
        if (digit%2!=0) 
        {
            prod*=digit;
        }
        n/=10;
    }
    printf("Product of odd digits = %d",prod);
}
