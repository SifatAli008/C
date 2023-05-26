//14. WAP that will get the largest element of an array using recursion.
#include <stdio.h>
#include <string.h>
#include <stdio.h>
void recArray(int array[],int start,int size)
{
   if(start >= size){
    return ;
   }
   else{
    printf("%d, ",array[start]);
    recArray(array,start+1,size);
   }
}

int main()
{
 int array[5]={5,10,15,20,25};
  recArray(array,0,5);
  return 0;
}
