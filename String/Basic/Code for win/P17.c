//Write a C program to count occurrences of a character in given string.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    char ch;

    printf("\n Please Enter the Character that you want to Search for :  ");
    scanf("%c", &ch);

    int i = 0, len = 0;
    while (str[i] != 0)
    {
        len++;
        i++;
    }

    int count = 0;
    int flag =0;

    for (i = 0; i <= len; i++)
    {
        if (str[i] == ch)
        {
            count++;
            flag++;
        }
    }

    if (flag == 0)
    {
        printf("\n Sorry!! We haven't found the Search Character '%c' ", ch);
    }

    else
    {
        printf("\n The First Occurrence of the Search Element '%c' is at Occurre %d times ", ch, count);
    }
}