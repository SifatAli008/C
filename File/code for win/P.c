//C program to create a file and write data into file
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    file = fopen("file.text",w);
    char ch[500];

    if (file==NULL)
    {
        printf("File Not found");
    }
    else{
        printf("file is open")
        fgets()
    }
}