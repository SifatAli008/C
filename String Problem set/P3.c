//Write a program in C to count how many vowels are there in a string.
#include <stdio.h>
#include<string.h>
int main()
{
    char str[60];
    int i, vowel;

   fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';


    vowel= 0;
    int ch;
    while ((ch = str[i]) != '\0')
    {

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowel++;
        }

        i++;
    }


    printf("Number of vowle: %d\n", vowel);
}