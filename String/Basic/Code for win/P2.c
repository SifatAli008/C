//Write a C program to copy one string to another string..
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];

    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")] = '\0';

    char str2[100];

    int i=0;
    while (str1[i]!='\0')
    {
        str2[i]=str1[i];

        i++;
    }
    str2[i]='\0';
    
    puts(str2);

} 