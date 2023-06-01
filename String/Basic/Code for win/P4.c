//Write a C program to compare two strings.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];

    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")] ='\0';

    char str2[100];

    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")] ='\0';

    int i =0,count=0;
    while(str1[i]!='\0'){
            if(str1[i]==str2[i]){
                count++;
            }
            i++;
    }

    if(count>0){
        printf("string String1 and String2 equal");
    }

    else{
        printf("string String1 and String2 is not  equal");
    }


}