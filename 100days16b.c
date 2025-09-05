//Q32: Write a program to check if a number is a palindrome.//

#include <stdio.h>
int main() 
{
    int num, og,rev=0,rem;
    printf("Enter a number");
    scanf("%d",&num);
    og=num;
    while (num!=0) 
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }

    if (og== rev)
        {printf("Palindrome");}
    else
        {printf("Not Palindrome");}

}
