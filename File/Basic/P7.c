//P-7:read a file using fscanf().
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *file;
    char ch[300];

    file = fopen("file.text","r");

    if(file==NULL){
      printf("File is not Found ");
    }

    else{
        printf("File is opened\n");
        
        fscanf(file,"%s",&ch);
          printf("%s\n",ch);
        fclose(file);

      printf("File readed  sucessfully\n");
    }
}