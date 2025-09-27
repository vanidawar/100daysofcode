//Q76: Check if a matrix is symmetric.//

#include <stdio.h>
int main() 
{
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[100][100];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            printf("enter element");
            scanf("%d", &matrix[i][j]);
        }
    }
    if (n != m) 
    {
        printf("False");
    }
    int symmetric = 1;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            if (matrix[i][j] != matrix[j][i]) 
            {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric) 
        {break;}
    }

    if (symmetric)
        {printf("True");}
    else
        {printf("False");}
}
