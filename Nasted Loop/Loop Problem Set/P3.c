// 12
#include <stdio.h>
int main()
{
    int row, col, space, n;

    scanf("%d", &n);

    for (row = 1; row <=n; row++)
    {
        for(space=n; space>=1;space--){
         printf ("_ ");
        }
        for (col = 1; col <=row; col++)
        {
           printf ("* ");
        }
        printf("\n");
    }

    return 0;
}