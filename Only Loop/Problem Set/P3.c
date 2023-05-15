#include <stdio.h>
int main ()
{
    int i,n;

    printf("Enter the number of values: ");
    scanf("%d",&n);

   for(i=1;i<=n;i++){
    if(i%2==0){
    printf("0");
   }
 else if(i%2!=0){
    printf("1");
 }
   if(i!=n){
    printf(",");
 }
   }
   return 0;
}