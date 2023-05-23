//P-6:read a file using fgets().
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char ch[100];

    file = fopen("file.text","r");
    
  

    if (file==NULL)
    {
        printf("File Not found");
    }
    else{
        printf("file is open\n");
        fgets(ch,sizeof(ch),stdin);
        fputs(ch,file);
        printf("file is crated sucessfully\n");
    }
}