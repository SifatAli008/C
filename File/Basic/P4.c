//P-4:writing to a file using fprintf().
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *file ;
    char ch[100];

    file = fopen("demo.text","w");

    if(file==NULL){
        printf("File is not found");
    }
    else{
         printf("File is Opend\n");
         fgets(ch,sizeof(ch),stdin);
         fprintf(file,"File data : %s",ch);
         fclose(file);
        printf("File is Succesfully save\n");
    }
}