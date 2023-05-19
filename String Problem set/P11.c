// Write a program in C to add the digits in a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int sum = 0, ch;
    int i = 0;
    while ((ch = str[i]) != '\0')
    {
        if ((ch >= '0') && (ch <= '9'))
        {
            sum = sum + (str[i] - 48); // '0' is ascii value is 48 ...
        }                              // if 3 as a string = 51 - 48 = 3 as a Number...

        i++;
    }

    printf("%d", sum);
}
