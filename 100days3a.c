Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main()
{
    float temp;
    printf("enter temperature in Celcius");
    scanf("%f",&temp);
    float fran= ((temp*(9/5))+32);
    printf("temperature in Fahrenheit is=%f",fran);
}
