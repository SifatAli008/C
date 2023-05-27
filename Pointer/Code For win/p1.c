#include <stdio.h>
int main()
{
    int n = 5;
   float m = 6.5;
   char ch = 'M';

   printf("%d Integer %u\n",n,&n);
   printf("%.1f Float %u\n",m,&m);
   printf("%c Character %u\n",ch,&ch);

}

