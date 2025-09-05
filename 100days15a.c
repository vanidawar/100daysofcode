//Q29: Write a program to calculate the factorial of a number.//

#include <stdio.h>
int main()
{
    int i,n,fact=1;
    printf("enter number");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is %d",n,fact);
}