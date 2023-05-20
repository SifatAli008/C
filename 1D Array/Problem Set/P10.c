#include <stdio.h>
int main()
{

  int i, n, temp[i];

  scanf("%d", &n);

  int arrayOne[n];

  for (i = 0; i < n; i++)
  {
    scanf("%d", &arrayOne[i]);
  }

  printf("Enter the Element of Secomd : ");
  
  int m;

  scanf("%d", &m);

  int arraytwo[m];

  printf("Enter the Element of Second : ");

  for (i = 0; i < m; i++)
  {
    scanf("%d", &arraytwo[i]);
  }

  for (i = 0; i < n; i++)
  {
    temp[i] = arrayOne[i];
    arrayOne[i] = arraytwo[i];
    arraytwo[i] = temp[i];
  }
  for (i = 0; i < m; i++)
  {
    printf("%d ", arrayOne[i]);
  }

  printf("\n");

  for (i = 0; i < n; i++)
  {
    printf("%d ", arraytwo[i]);
  }

  return 0;
}
