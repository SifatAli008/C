//Write C Program C program to interchange diagonals of a matrix
#include <stdio.h>
int main()
{
  int m,n;
  scanf("%d",&m);
  scanf("%d",&n);

int array[m][n];
  int i,j;
      for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &array[i][j]);
            }
            printf("\n");
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d", array[i][j]);
            }
             printf("\n");
        }
}