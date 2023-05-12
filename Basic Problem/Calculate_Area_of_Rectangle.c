#include <stdio.h>
int main ()
{
    int area ,lanth,width;
     
    printf("Enter the value of the lanth:");
    scanf("%d",&lanth);

    printf("\nEnter the value of the width: ");
    scanf("%d",&width);

    area=width*lanth;
    printf("The are of the Rectangle:%d \n",area);


    return 0;
}
