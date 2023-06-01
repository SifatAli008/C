//Write a C program to find last occurrence of a character in a given string.
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

    int Flag = 0;

    for (i = len; i >= 0; i--)
    {
        if (str[i] == ch)
        {
            Flag++;
            break;
        }
    }

    if (Flag == 0)
    {
        printf("\n Sorry!! We haven't found the Search Character '%c' ", ch);
    }

    else
    {
        printf("\n The lest Occurrence of the Search Element '%c' is at Position %d ", ch, i + 1);
    }
}