// Write a C program to find power of any number using recursion.
#include <stdio.h>
#include <math.h>
int powNum (int n, int expo);

int main (){

    int n, expo, result;
    printf ("Input base: ");
    scanf ("%d", &n);
    printf ("Input exponent: ");
    scanf ("%d", &expo);

    result=powNum (n, expo);
    printf ("%d to the power of %d: %d", n, expo, result);
}

int result=1;
int powNum (int n, int expo){

    if (expo==0){
        return result;
    } else {
        result=result*n;
        return powNum (n, expo-1);
}

}