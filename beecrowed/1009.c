#include<stdio.h>
int main()
{
    float A,B,Total;
    char name[10];
    scanf("%s %f %f",&name,&A,&B);

   Total=((B*15)/100)+A;
    printf("TOTAL = R$ %.2f\n",Total);
    return 0;
}
