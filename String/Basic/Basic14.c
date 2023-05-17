#include <stdio.h>
int main()
{
  char str[3];
  
 //gets(str);
 
// fgets(name,sizeof(name),stdin);
fgets(str,sizeof(str),stdin);


  puts(str);
}