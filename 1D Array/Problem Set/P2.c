#include <stdio.h>
int main (){

	int i, j, n, sum=0;
	printf ("Enter the size: ");
	scanf ("%d", &n);

	int arrayOne[n];

	for (i=0; i<n; i++){
        scanf ("%d", &arrayOne[i]);
	}

	for (j=0; j<n; j++){
        sum=sum+arrayOne[j];
    }
    printf ("%d", sum);



}