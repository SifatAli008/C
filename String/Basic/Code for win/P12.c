// Write a C program to check whether a string is palindrome or not.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50];
    char str2[50];

     fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

     int i=0,len=0,j;
     while(str1[i]!='\0'){
         i++;
         len++;
     }
      
      j=0;                   //madam 0-4 =srt1
     for(i=len-1; i>=0; ){  //madam 4-0 =str2
        str2[j]=str1[i];
        i--;
        j++;
     }
     str2[j]='\0';


    int dif = strcmp(str1,str2);

    if(dif==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}