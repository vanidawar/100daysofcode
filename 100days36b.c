//Q72: Find the sum of all elements in a matrix.//

#include <stdio.h>
int main() 
{
    int rows,cols;
    printf("Enter number of rows and columns");
    scanf("%d %d",&rows,&cols);
    int matrix[rows][cols];
    int sum = 0;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("%d",sum);
}
