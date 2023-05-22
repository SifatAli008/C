// Function to take two positive numbers x and n as input and calculate x to the power n.
#include<stdio.h>
int powCalc (int x, int n){

    int powC=1;
    for (int i=1; i<=n; i++){ //   1 2 
        powC=powC*x;         //  powC=powC*a;
                            //  =1*5 
                           //  =5*5 =25                      
    }                        

    printf ("%d to the power %d is %d\n",x, n, powC);

}

int main (){

    int x, n;
    printf ("Enter a number and it's Exp: ");
    scanf ("%d %d", &x, &n);

    powCalc(x,n);

    return 0;
}
