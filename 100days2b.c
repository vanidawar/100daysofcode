//Q4: Write a program to calculate the area and circumference of a circle given its radius.//

#include <stdio.h>
int main()
{
    int radius;
    printf("enter radius");
    scanf("%d",&radius);
    float area=3.14*radius*radius;
    float cirm=2*3.14*radius;
    printf("area=%f circumference=%f",area,cirm);
}