//Q30: Write a program to reverse a given number.//

#include <stdio.h>
int main() 
{
    int n,rem,rev=0;
    printf("enter number");
    scanf("%d",&n);
    
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("Reversed number = %d", rev);
}
