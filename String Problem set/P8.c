// Write a program in C to sort a string array in alphabetic order.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int temp;
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = 0 + i; str[j] != '\0'; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    puts(str);
}