//Q54: Write a program to print the following pattern://
/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>
int main()
{
   int i, j, space;
   for (i = 1; i <= 4; i++)
    {
        for (space = i; space < 4; space++)
            {
               printf(" ");
            }
        for (j = 1; j <= (2 * i - 1); j++)
            {
               printf("*");
            }
        printf("\n");
    }
   for (i = 3; i >= 1; i--)
    {
        for (space = i; space < 4; space++)
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}