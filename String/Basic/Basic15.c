#include<stdio.h>
int main()
{

    char str1[100]="the";
    char str2[100]="thrre";

    if(strncmp(str1,str2,3)<0 )
    {

        printf("str1 is less than str2");
    }

    else if(strncmp(str1,str2,3)==0)



        printf("str1 is equal to str2");

     else

         printf("str1 is greater than str2");


}