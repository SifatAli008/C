//Write a C program to find total number of alphabets, digits or special character in a string.
#include <stdio.h>
#include <string.h>
int main(){

    char str[100];

    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] ='\0';
     
    int i,alphabets,digits,special;

     i=alphabets=digits=special=0;
     while(str[i]!='\0')
     {
      if(str[i]>=65 && str[i]<=90 ||str[i]>=97 && str[i]<=122){
         alphabets++;
      }

      else if (str[i] >= 48 && str[i] <= 57){
        digits++;
      }
      else{
        special++;
      }
      i++;
     }

     printf("alphabets: %d\n",alphabets);
     printf("digits: %d\n",digits);
     printf("special: %d\n",special);

}