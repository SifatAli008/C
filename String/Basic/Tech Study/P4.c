// C program to convert a string to upper case.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int i = 0;
    while (str[i] != '\0')
    {
        if (i >= 'a' || i <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    puts(str);
}