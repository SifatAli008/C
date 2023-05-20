#include <stdio.h>
int main()
{
    int i, n;

    printf("Enter number of Elment: ");
    scanf("%d", &n);

    int num[n];
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int max = num[0];
    int min = num[0];

    for (i = 0; i < n; i++)
    {
        if (num[i] > max){
            max = num[i];
        }
    }
        for (i = 0; i < n; i++)
    {
        if (num[i] < min){
            min = num[i];
        }

    }
    

    printf("Max: %d\n",max);
    printf("Min: %d\n",min);

    return 0;
}