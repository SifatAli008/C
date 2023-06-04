// C program to find string length.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int i = 0, len = 0;
    while (str[i] != '\0')
    {
        len++;
        i++;
    }

    printf("Lenght:%d", len);
}
