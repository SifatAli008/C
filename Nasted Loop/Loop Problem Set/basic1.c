#include <stdio.h>
int main()
{
    int row, column, space, n;

    scanf("%d", &n);
    for (row = 1; row <= n; row++) // row = 1 ; 1 <= 4 ; 2nd for / new line ; 1+1=2;
    {
        for (column = 1; column <= n ; column++) // 1 ; 1<=1 // 1 ; 1+1=2 
        {
        
            printf("%d ", column);

           // printf("%d", row);
        }
        printf("\n");
    }
    return 0;
}