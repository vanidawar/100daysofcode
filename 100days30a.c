//Q59: Count even and odd numbers in an array.//

#include <stdio.h>
int main()
{
    int n, i, even = 0, odd = 0;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        printf("Enter element");
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            {
                even++;
            }
        else
        {
            odd++;
        }
    }
    printf("Even=%d Odd=%d", even, odd);
}
