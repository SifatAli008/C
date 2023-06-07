#include <stdio.h>
int main()
{
    int row, column, n;
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        // inside row
        for (column = 1; column <= n ; column++)
         // inside 
        {
            if ((row == 1 || column == 1) || (row == n || column == n))
            {
                printf("* ", column);
            }
          else{
            printf("  ");    
          }
        }
        printf("\n");
    }

    return 0;
}