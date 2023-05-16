#include <stdio.h>
int main()
{
  int row, column, space, n;

  printf("Enter the number of one row: ");
  scanf("%d", &n);

  for (row = 1; row <= n; row++) // row = 5 ; 1 <= 4 // 2nd for //printf ;1+1=2;
  {
    for (column = n - 1; column >= row; --column) // coloumn= 4-1 =3 ; 3 >= 1 ; printf ; 1-1=0
    {
       printf("%d",row);
     // printf("%d ", column); 
    }
    printf("\n");
  }
  return 0;
}