#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number Multiplication table you want:  ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, i * num);
    }
    return 0;
}

// first %d print the Entered number,
// second %d print the i value of loop,
// third %d print the multiplication value of the secend and first int.