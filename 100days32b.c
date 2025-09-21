//Q64: Find the digit that occurs the most times in an integer number.//

#include <stdio.h>
int main() 
{
    int num, temp, digit, count, maxCount = 0, mostDigit = 0;
    printf("Enter an integer");
    scanf("%d",&num);
    for (digit=0; digit<=9; digit++) 
    {
        temp = num;
        count = 0;
        while (temp > 0) 
        {
            if (temp % 10 == digit)
                count++;
            temp /= 10;
        }
        if (count > maxCount) 
        {
            maxCount = count;
            mostDigit = digit;
        }
    }
    printf("Digit that occurs the most is %d", mostDigit);
}
