//Function to swap two numbers. 
//(Restriction: Pass by reference)
#include <stdio.h>
void fun(int *ptr1, int *ptr2)
{
    *ptr1 = 20;
    *ptr2 = 10;
    
    printf("Value in func:%d %d", *ptr1, *ptr2);
}


int main()
{
    int x = 10, y = 20;
    fun(&x, &y);

    printf("\nValue in main:%d %d", x, y);
}