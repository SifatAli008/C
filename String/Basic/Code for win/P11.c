// Write a C program to find reverse of a string.
#include <stdio.h>
#include <string.h>
int main()
{

    char str1[100];

    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    char str2[100];

    int i = 0, len = 0;
    while (str1[i] != '\0')
    {
        i++;
        len++;
    }

    int j = 0;
    for ( i = len - 1; i >= 0; )
    {
        str2[j] = str1[i];

        i--;
        j++;
    }
    
    str2[j] = '\0';

    puts(str2);
}