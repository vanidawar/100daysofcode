//Q74: Find the transpose of a matrix.//

#include <stdio.h>
int main() 
{
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[100][100], transpose[100][100];
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            printf("enter element");
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < cols; i++) 
    {
        for (int j = 0; j < rows; j++) 
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

}
