//Write a C program to find length of a string.
#include <stdio.h>
#include <string.h>
int main(){

    char str[100];

    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] ='\0';

    int i,len=0;
     while(str[i]!='\0')
     {
      len++;
      i++;
     }

     printf("%d",len);

}