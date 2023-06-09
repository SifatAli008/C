//C program to add two matrices
#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);

int A[m][n];

 for(int i = 0;i < m;i++){
      for(int j = 0;j <n;j++){
      scanf("%d",&A[i][j]);
    }
    printf("\n");
 }

 int B[m][n];

 for(int i = 0;i < m;i++){
      for(int j = 0;j <n;j++){
      scanf("%d",&B[i][j]);
    }
    printf("\n");
 }

  int C[m][n];

 for(int i = 0;i < m;i++){
    for(int j = 0;j < n;j++){
      C[i][j]= A[i][j]+B[i][j];
    }
    printf("\n");
 }
 
 for(int i = 0;i < m;i++){
    for(int j = 0;j < n;j++){
      printf("%d ",C[i][j]);
    }
    printf("\n");
 }
}