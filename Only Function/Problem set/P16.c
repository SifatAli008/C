//16. Function that multiplies the array elements by 2 and returns the array.
#include <stdio.h>

int multi(int n){
    int i, a[n];

    for (i=0; i<n; i++){
        scanf ("%d", &a[i]);
    }
    
    for (i=0; i<n; i++){
       printf ("%d ", a[i]*2);
    }
  
}


int main (){

    int n;
    scanf ("%d", &n);

   multi(n);

}