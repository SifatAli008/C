//10 You have to declare a structure named triangle. triangle_id, base and height are the members of this structure. Now you will have to take input of three triangles and find out the area of each triangle.
//[Triangle Area = (base*height)/2]

#include <stdio.h>
#include <string.h>
 struct Area
{
   int id;
   int base;
   int height;
};

int main(){
   int n=3;

 struct Area a[n];
 
 for(int i =0 ; i<n;i++){
    printf("Area %d \n",i+1);
    scanf ("%d", &a[i].id);
    scanf ("%d", &a[i].base);
    scanf ("%d", &a[i].height);

    printf("Area of %d = %d\n",id,(a[i].base*a[i].height)/2);
 }
   return 0;
}
