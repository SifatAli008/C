//Write a program (WAP) that will give the sum of first Nth terms for the following series.
//1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 11, -12, 13, -14, …….
#include <stdio.h>

int main (){

    int i, j, sum=0, result, n, inc=1;
    scanf ("%d", &n);

    int odd=1, even=2;

    for (i=1; i<=n/2; i++){

        result=odd+(-even);
        sum=sum+result;

        odd+=2;
        even+=2;
    }

    if (n%2!=0){
        sum+=n;
    }

    printf ("Result: %d\n",sum);

}