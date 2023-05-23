//P-1:Create a file.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    file = fopen("file.text","w");
  

    if (file==NULL)
    {
        printf("File Not found");
    }
    else{
        printf("file is open\n");
        fclose(file);
        printf("file is crated sucessfully\n");
    }
}