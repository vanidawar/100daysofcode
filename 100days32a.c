//Q63: Merge two arrays.//

#include <stdio.h>
int main() 
{
    int n1, n2, i, j;
    printf("Enter size of first array");
    scanf("%d", &n1);
    int arr1[n1];
    for (i = 0; i < n1; i++) 
    {
        printf("enter element");
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array");
    scanf("%d", &n2);
    int arr2[n2];
    for (i=0;i<n2;i++) 
    {
        printf("enter element");
        scanf("%d",&arr2[i]);
    }
    int merged[n1+n2];
    for (i=0;i<n1;i++) 
    {
        merged[i]=arr1[i];
    }
    for (j=0;j<n2;j++) 
    {
        merged[i+j]=arr2[j];
    }
    printf("Merged array");
    for (i=0;i<n1+n2;i++) 
    {
        printf("%d ", merged[i]);
    }
    printf("\n");
}
