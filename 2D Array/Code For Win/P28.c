//C program to find sum of main diagonal elements of a matrix
#include <stdio.h>
int main()
{
    int row,col;

    scanf("%d",&row);
    scanf("%d",&col);

int A[row][col];

 for(int i = 0;i < row;i++){
      for(int j = 0;j <col;j++){
      scanf("%d",&A[i][j]);
    }
    printf("\n");
 }

int sum=0;

  for(int i = 0;i < row;i++){
    sum = sum + A[i][i]; 
 }

printf("%d",sum);

    
}