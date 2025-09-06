//Q33: Write a program to check if a number is an Armstrong number.//

#include <stdio.h>
int main()
{
    int n,temp,i,rem,res;
    printf("enter number");
    scanf("%d",&n);
    temp=n;

    while (n!=0)
    {
        rem = n%10;
        res+=rem*rem*rem;
        n/= 10;
    }

    if (res == temp)
        {printf("Armstrong");}
    else
        {printf("Not Armstrong");}

}