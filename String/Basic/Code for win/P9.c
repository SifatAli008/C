//Write a C program to count total number of vowels and consonants in a string.
#include <stdio.h>
#include <string.h>
int main(){

    char str[100];

    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] ='\0';

    
   int i , vowel,consonant;
    i = vowel = consonant = 0;

    int ch;

    while ((ch = str[i]) != '\0')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowel++;
        }

        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            consonant++;
        }

        i++;
    }
      

    printf("Number of vowle: %d\n", vowel);
    printf("Number of consonant: %d\n", consonant);
   
    

}   
