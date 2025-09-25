//Q71: Read and print a matrix.//

#include <stdio.h>
int main() 
{
    int i,j;
    printf("Enter number of rows and columns");
    scanf("%d %d", &i, &j);
    int matrix[i][j];
    for (int x=0;x<i;x++) 
    {
        for (int y=0;y<j;y++) 
        {
            scanf("%d",&matrix[x][y]);
        }
    }
    for (int x=0;x<i;x++) 
    {
        for (int y=0;y<j;y++) 
        {
            printf("%d ", matrix[x][y]);
        }
        printf("\n");
    }
}
