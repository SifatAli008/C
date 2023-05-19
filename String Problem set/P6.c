//Write a program in C to convert lowercase string to uppercase.s
#include <stdio.h>
#include <string.h>
int main()
{
    char str[60];

     fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int i = 0;
    while (str[i] != '\0')
    {
       // if (str[i] >= 'a' && str[i] <= 'z')
        if (str[i] >= 'a' && str[i] <= 'z')
        {
      //      str[i] = str[i] -  32;//asciie  valu difference
             str[i] = str[i] - 32;//asciie  valu difference
        }
        i++;
    }

    printf("%s \n", str);
}