//Q56: Read and print elements of a one-dimensional array.//

#include <stdio.h>
int main()
{
    int i,n;
    printf("enter number of elements");
    scanf("%d",&n);
    int list[n];
    for (i=0;i<n;i++)
    {
        printf("enter element");
        scanf("%d",&list[i]);
    }
    for (i=0;i<n;i++)
    {
        printf("%d",list[i]);
        printf("\t");
    }
}