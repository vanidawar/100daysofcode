//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.//

#include <stdio.h>
int main()
{
    char let;
    printf("enter character");
    scanf("%c",&let);
    if (let == 'a' || let == 'e' || let == 'i' || let == 'o' || let == 'u' ||
        let == 'A' || let == 'E' || let == 'I' || let == 'O' || let == 'U')
    {
        printf("%c is a vowel",let);
    }
    else
    {
        printf("%c is a consonant",let);
    }
}