#include <stdio.h>
int main ()
{
    char s1[]="Sifat Ali ";
    char s2[]="Study in CSE";

    printf("s1= %s\n",s1);
    printf("s2= %s\n",s2);
    strcat(s1,s2);

    printf("%s\n",s1);
}