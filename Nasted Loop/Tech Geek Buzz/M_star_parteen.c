//M-star Prateen.
#include <stdio.h>
int main()
{

    int row, col, n;
    scanf("%d", &n);

    int m = n / 2 + 1;

    for (row = 1; row <= n; row++)
    {

        for (col = 1; col <= m; col++)
        {

            if (col == 1 || col == n ||row == col)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        for (col = m - 1; col >= 1; col--)
        {

            if (col == 1 || col == n ||row == col)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
}