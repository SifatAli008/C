//Write a program in C to concatenate two strings without using any library function.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50];
    char str2[50];

    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';


    int  i = 0;
    while (str1[i] != '\0')
    {
        i++;
    }

    str1[i] = ' ';
    i++;

    int j=0;
    while(str2[j]!='\0')
    {
       str1[i+j]=str2[j];
     j++;
    }

   str1[i+j]='\0';


    puts(str1);
}