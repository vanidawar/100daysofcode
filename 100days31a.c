//Q61: Search for an element in an array using linear search.//

#include <stdio.h>
int main() 
{
    int n, i, key, found = -1;
    printf("Enter number of elements");
    scanf("%d",&n);
    int arr[n];
    for (i = 0;i<n;i++) 
    {
        printf("enter element");
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search");
    scanf("%d",&key);
    for (i=0;i<n;i++) 
    {
        if (arr[i]==key) 
        {
            found=i;
            break;
        }
    }
    if (found!=-1)
    {
        printf("Found at index %d", found);
    }
    else
    {
        printf("not found");
    }

}
