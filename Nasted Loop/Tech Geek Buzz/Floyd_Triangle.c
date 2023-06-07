#include <stdio.h>
int main()
{
    int row, column, n,count=0;

    scanf("%d", &n);
    for (row=1;row<=n;row++){
        for (column=1;column<=row;column++)
        {
             count++;
            printf("%d ",count);
        }

          printf("\n");       
    }

    return 0;
}
