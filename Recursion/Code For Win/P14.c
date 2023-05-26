#include <stdio.h>

void EvenOdd(int a, int b)
{
    int start = a;
    int end = b;

    if (start % 2 == 0)
    {
        if (start > end)
        {
            return; //
        }
         printf("\nEven: ");
        printf("%d ", start);
        printf("%d ", start+1);
        EvenOdd(start + 2, end);
         
    }
    else if (start % 2 != 0)
    {
        if (start > end)
        {
            return; //
        }
        printf("%d ", start);
        EvenOdd(start + 2, end);
        printf("%d ", start+1);
    }
}
    int main()
    {
        int start, end, isEven, sum;

        printf("Enter the start of range: ");
        scanf("%d", &start);
        printf("Enter the end of range: ");
        scanf("%d", &end);

         EvenOdd(start, end);
    }
