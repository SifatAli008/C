//swap
#include <stdio.h>
int swap(int *ptr1, int *ptr2);

int main()
{
    int n, m;
    int *ptr1, *ptr2;

    scanf("%d %d", &n, &m);

    ptr1 = &n;
    ptr2 = &m;

    printf("Befor: %d %d\n", *ptr1, *ptr2);


    swap(ptr1, ptr2);
}

int swap(int *ptr1, int *ptr2) // 5 10
{

    int temp;

    temp = *ptr1;   //  5 = 0
    *ptr1 = *ptr2; // 10 = 0
    *ptr2 = temp;  //  5 = 0;   

  return  printf("After: %d %d\n", *ptr1, *ptr2);
}