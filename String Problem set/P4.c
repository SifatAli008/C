// Write a program in C to count the number of words in a string.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[60];
    int i, vowel, consonant, digit, word, other;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    
    word = 0;
   int ch;
    while ((ch = str[i]) != '\0')
    {

         if (ch == ' ')
        {
            word++;
        }

        i++;
    }
    word++;

  
    printf("Number of word: %d\n", word);
    
}