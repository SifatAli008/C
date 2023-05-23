//P-2:write,apand to a file.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char ch[100];

    file = fopen("file.text","a");
    
  

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