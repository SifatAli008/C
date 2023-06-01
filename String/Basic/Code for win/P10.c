//C program to count number of words in a string:
#include <stdio.h>
#include <string.h>
int main(){

    char str[100];

    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] ='\0';

    int i=0, word=0;
     while(int ch=(str[i])!='\0')
     {
      if(ch==' '){
        word++;
      }
      i++;
     }
     word++;

     printf("Word : %d",word);

}

