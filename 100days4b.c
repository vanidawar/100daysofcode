#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter number n");
    scanf("%d",&n);
    for (i = 1; i <= n; i++) 
    {
        sum += i;
    }
    printf("The sum is:%d", sum);
}