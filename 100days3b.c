//Q6: Write a program to swap two numbers using a third variable.//

#include <stdio.h>
int main()
{
    int a,b;
    printf("enter 2 numbers");
    scanf("%d %d",&a,&b);
    int c=b;
    b=a;
    a=c;
    printf("after swap: %d %d",a,b);
}