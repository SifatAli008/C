// WAP that will print even or odd numbers in given range using recursion.
#include <stdio.h>
void evenrec(int a, int b);
void oddrec(int a, int b);

int main()
{
    int start, end;
    scanf("%d", &start);
    scanf("%d", &end);

    printf("Even Numbers from %d to %d are: ", start, end);
    evenrec(2, end);

    printf("\n");

    printf("odd Numbers from %d to %d are: ", start, end);
    oddrec(start, end);
}

void evenrec(int a, int b)
{
    if (a > b)
    {
        return;//
    }
    printf("%d, ", a);
    evenrec(a + 2, b);
}

void oddrec(int a, int b)
{
    if (a > b)
    {
        return;
    }
    printf("%d, ", a);
    oddrec(a + 2, b);
}