//Delet Duplicate Number
#include <stdio.h>

int main()
{

    int n;
    int i, j, k;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
         
        {
            if (a[i] == a[j])//(1==2, 2==3, 3==4, 4==5),
                            //(2==3, 3==4, 4==5), 
                            //(3==4, 4==5),
                            //(4==5)
            {
                for (k = j; k < n - 1; k++) 
                {
                    a[k] = a[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    printf("\nArray elements after deleting duplicates : ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}