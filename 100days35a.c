//Q69: Find the second largest element in an array.//

#include <stdio.h>
int main()
{
    int i,n,temp;
    printf("enter number of elements");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        printf("enter element");
        scanf("%d",&arr[i]);
    }
    int largest, second;
    if (arr[0] > arr[1]) 
    {
        largest = arr[0];
        second = arr[1];
    } 
    else 
    {
        largest = arr[1];
        second = arr[0];
    }
    for (i = 2; i < n; i++) 
    {
        if (arr[i] > largest) 
        {
            second = largest;
            largest = arr[i];
        } 
        else if (arr[i] > second && arr[i] != largest) 
        {
            second = arr[i];
        }
    }
    printf("second largest element in the array is %d",second);
}


