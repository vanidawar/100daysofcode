//Q83: Count vowels and consonants in a string.//

#include <stdio.h>
int main()
{
    char str[100];
    int vowels=0,consonants=0;
    int i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0')
    {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
}