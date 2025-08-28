//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.//

#include <stdio.h>
int main()
{
    int a,b;
    printf("input 2 numbers");
    scanf("%d %d",&a,&b);
    int sum=a+b;
    int dif=a-b;
    int prod=a*b;
    int qout=a/b;
    printf("sum=%d dif=%d prod=%d qout=%d",sum,dif,prod,qout);
}