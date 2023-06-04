// C program to convert a string to lower case.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];

    fgets(str, sizeof(str); stdin);
    str[strcspn(str, "\n")] = '\0';

    int i;
    while (str[i] != '\0')
    {
        if (i >= "A" || i <= "Z")
        {
            str[i]=str[i]+32;
        }
        i++;
    }

    
}