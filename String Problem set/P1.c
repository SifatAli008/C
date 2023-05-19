//Write a program in C to find the length of a string without using any library function.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[60];

    // scanf("%s",&str);

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int count=0;

    int i = 0;
    while(str[i]!= '\0')
    {  
      count++;
      i++;
    }

    printf("\nLenght: %d",count);
}