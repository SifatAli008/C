#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter the value of First Angle: ");
    scanf("%d", &a);

    printf("Enter the value of Secend Angle: ");
    scanf("%d", &b);

    printf("Enter the value of Third Angle: ");
    scanf("%d", &c);

    if (a > 0 && a < 180)
    {
        if (b > 0 && b < 180)
        {
            if (c > 0 && c < 180)
            {
                if (a + b + c == 180)
                {
                    printf("Yes");
                }
                else
                {
                    printf("No");
                }
            }
            else
            {
                printf("No");
            }
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        printf("No");
    }

    return 0;
}