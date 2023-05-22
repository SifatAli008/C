//14. Function to determine only even numbers in an A of input integers.
#include <stdio.h>

int evenOdd (int n){
    int i, a[n];

    for (i=0; ; i++){
        scanf ("%d", &a[i]);
    }

    for (i=0; ; i++){
        if (a[i]%2==0){
            printf ("%d ", a[i]);
        }
    }
}


int main (){

    int n;
    scanf("%d",&n);
   
    evenOdd(n);

}