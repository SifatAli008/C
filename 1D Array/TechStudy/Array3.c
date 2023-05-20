#include <stdio.h>
int main()
{
 int i,n,arr1[100],arr2[100],arr3[100];
 
 scanf("%d",&n);

for(i=1;i<=n;i++){
 for(i=1;i<=n;i++){
    scanf("%d",&arr1[i]);
 }
 for(i=1;i<=n;i++){
    scanf("%d",&arr2[i]);
 }
  arr3[i]= arr1[i]+arr2[i];
}
 printf("%d",arr3[i]);

 return 0;
}