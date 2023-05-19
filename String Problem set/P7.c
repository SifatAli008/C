// Write a program in C to toggle the case of each character in a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int i = 0;
    while (str[i] != 0)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }

    puts(str);
}