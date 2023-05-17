#include <stdio.h>
int main ()
{

    char s1[]={"Sifat Ali"};
    int len=0;//lenght
         //  int len = strlen(s1);

     for(int i=0; s1[i]!='\0';i++){
        printf("%c\n",s1[i]);
        len++;
     }
      
    //printf(" Length = %d\n",len);

    printf("\nLenght: %d",len);

}