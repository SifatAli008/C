#include <stdio.h>
int main ()
{
    float fa,c;
    printf("Give a valu in Celsius: ");
    scanf("%f",&c);
    
     fa = (c * 1.8)+32;
     printf("Fahrenheit valu of %.3f Celsius is: %.3f. \n",c,fa);
    return 0;
}