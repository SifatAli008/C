#include <stdio.h>
int main() {

  int n,r;
  printf("Enter an integer: ");
  scanf("%d",&n);

  while (n>0) {
    r=n%10;
    printf("%d\n",r);
    n=n/10;
    printf("%d\t",n);
  }
  return 0;
}
