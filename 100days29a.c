//Q57: Find the sum of array elements.//

#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        printf("enter element:");
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("Sum of array elements:%d",sum);
}
