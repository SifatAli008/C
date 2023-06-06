#include<stdio.h>
int main()
{
    float A,B,C; //A=Wight B=lenth C=Height
    float Trainge,Trapezium,Retangular,square,circle;
    scanf("%f %f %f",&A,&B,&C);

    Trainge = (A*C)/2;
    printf("TRIANGULO: %.3f \n",Trainge);

    circle=3.14159*C*C;
    printf("CIRCULO: %.3f\n",circle);

    Trapezium = (C *(A+B))/2;
    printf("TRAPEZIO: %.3f \n",Trapezium);

    square=B*B;
    printf("QUADRADO: %.3f\n",square);

    Retangular = A*B;
    printf("RETANGULO: %.3f \n",Retangular);
    return 0;
}


