//Q60: Count positive, negative, and zero elements in an array.//

#include <stdio.h>
int main() {
    int n, i, positive = 0, negative = 0, zero = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (i=0;i<n;i++) 
    {
        printf("enter element");
        scanf("%d", &arr[i]);
    }
    for (i=0;i<n;i++) 
    {
        if (arr[i]>0)
        {
            positive++;
        }
        else if (arr[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }
    printf("Positive=%d Negative=%d Zero=%d", positive, negative, zero);
}
