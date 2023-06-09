#include <stdio.h>
int main(){

    int i, j, n, num;
    printf ("Enter the array size: ");
    scanf ("%d", &n);

    int a [n][n];

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            scanf ("%d", &a [i][j]);
        }
    }

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            printf ("%d ", a [i][j]);
        }
        printf ("\n");
}

}