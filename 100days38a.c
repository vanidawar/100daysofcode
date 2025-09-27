//Q75: Add two matrices.//

#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("enter number of rows and coulumns for matrix 1");
    scanf("%d %d", &r1, &c1);
    int mat1[100][100];
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++) 
        {
            printf("enter element");
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("enter number of rows and coulumns for matrix 2");
    scanf("%d %d", &r2, &c2);
    int mat2[100][100];
    for (int i = 0; i < r2; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            printf("enter element");
            scanf("%d", &mat2[i][j]);
        }
    }

    if (r1 != r2 || c1 != c2) 
    {
        printf("Matrix addition not possible");
    }

    int sum[100][100];
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++) 
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++) 
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

