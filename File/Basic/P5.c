//P-5:read a file using fgetc()
#include <stdio.h>
int main()
{
    FILE *file;
    char ch;
    file = fopen("file.text","r");
    
    if(file == NULL)
    {
      printf ("\nFile doesn't exist");
    }
    
    else
    {
      printf("\nFile is opened successfully");
         
        while(!feof(file))//feof - file End of
        {
          ch = fgetc(file);
          printf("%c",ch);
        } 

        fclose(file);
    }
 }   
