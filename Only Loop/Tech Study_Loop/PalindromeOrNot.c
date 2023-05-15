#include<stdio.h>
int main()
{
 int i,n,pal;
   printf("Enter any number: ");
   scanf("%d",&n);
   
   pal = n;

   for( ; n > 0; n=n/10)
   {
       i = i*10;
       i = i + (n%10);
      
   }
   if(pal == i){
    printf("The number is palindrome");
   }
   else{
        printf("The number is not palindrome");
   }

 return 0;
}