//Q16: Write a program to input three numbers and find the largest among them using if–else.//

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 numbers");
    scanf("%d %d %d",&a,&b,&c);
    if (a >= b && a >= c) 
    {
        printf("The largest number is: %d", a);
    } 
    else if (b >= a && b >= c) 
    {
        printf("The largest number is: %d", b);
    } 
    else 
    {
        printf("The largest number is: %d", c);
    }

}
