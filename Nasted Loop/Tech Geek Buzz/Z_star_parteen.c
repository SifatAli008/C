// Z star parteen
#include <stdio.h>
int main()
{
    int row, column, n;
    scanf("%d", &n);
    for (row = n; row >= 1; row--)
    {
        // inside row
        for (column = 1; column <= n ; column++)
         // inside 
        {
            if ((row == n || row == 1 ) || (row == column))
            {
                printf("* ", row);
            }
          else{
            printf("  ");    
          }
        }
        printf("\n");
    }

    return 0;
}