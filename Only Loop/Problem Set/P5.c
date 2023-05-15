#include <stdio.h>
int main(){
    int i, a, b, gcd, lcm;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    for (i = 1; i <= a && i <= b; i++){
        if (a % i == 0 && b % i == 0){
            gcd = i;
        }
    }

    lcm = (a * b) / gcd;
    

    printf("GCD of %d and %d is: %d \n", a, b, gcd);
    printf("LCM of %d and %d is: %d", a, b, lcm);

    return 0;
}
