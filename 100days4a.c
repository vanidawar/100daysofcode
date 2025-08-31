//Q7: Write a program to swap two numbers without using a third variable.//

#include <stdio.h>
int main()
{
    int a,b;
    printf("enter 2 numbers");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap:%d and %d",a,b);
}
