//Q62: Reverse an array without taking extra space.//

#include <stdio.h>
int main() 
{
    int n, i, temp;
    printf("Enter number of elements");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++) 
    {
        printf("enter element");
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n/2;i++) 
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    printf("Reversed array");
    for (i=0;i<n;i++) 
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}
