//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.//

#include <stdio.h>
int main()
{
    int secs;
    printf("enter time in seconds");
    scanf("%d",&secs);  
    int hours = secs/3600;          
    int minutes = (secs % 3600) / 60; 
    int seconds = (secs % 60);      
    printf("%d:%d:%d", hours, minutes, seconds);
}