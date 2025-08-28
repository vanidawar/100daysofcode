//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.//

#include <stdio.h>
int main()
{
    int len,wd;
    printf("enter length and width");
    scanf("%d %d",&len,&wd);
    int area=len*wd;
    int perm=(2*len)+(2*wd);
    printf("area=%d perimeter=%d",area,perm);
}