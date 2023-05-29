//Write a C program to create Book Details using structure.
#include<stdio.h>
#include<string.h>

struct book{
  char  author[50];
  char  topic;
  int  page;
  float  price;
 

} 

int main(){
  int n;
  printf("Number of book: ");
  scanf("%d",&n);

  for(int i = 0;i<n;i++){
    printf("Book %d",i+1);
    printf("Name Of Author: ");
    gets();

  }
 

}