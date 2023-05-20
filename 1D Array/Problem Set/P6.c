//Max Min
#include <stdio.h>
int main()
{
    int i, n, s, t;

    printf("Size Of Array: ");
    scanf("%d", &n);

    int array[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int mx = array[0];
    int mn = array[0];

    for (i = 1; i < n; i++)
    {
        if (array[i] > mx)
        {
            mx = array[i];
            s = i;
        }
        for (i = 1; i < n; i++)
            if (array[i] < mn)
            {
                mn = array[i];
                t = i;
            }
    }

    printf("Max : %d\n", mx);
    printf("MaxIndex : %d\n", s);

    printf("Min : %d\n", mn);
    printf("MinIndex : %d\n", t);

    return 0;
}