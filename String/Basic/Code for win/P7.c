//C program to toggle case of each character in a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int i =0;
    while (str[i]!='\0')
    {
      if(str[i] >= 65 && str[i] <= 90 ){
           str[i]=str[i]+32;
      }

      else if(str[i] >= 97 && str[i] <= 122){
              str[i]=str[i]-32;
      }
      i++;
    }
    


    puts(str);
}    
