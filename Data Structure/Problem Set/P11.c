
#include<stdio.h>
#include<string.h>
typedef struct triangle
{
    int base ;
    int height;
    int triangle_id;

}triangle;

void triangleprint(triangle x);
int main()
{
    int n;
    scanf("%d",&n);
    triangle t[n];
    for(int i=0;i<n;i++)
    {
        printf("Area of triangle:%d\n\n",i+1);
        printf("triangle Id:");
        scanf("%d",&t[i].triangle_id);

        printf("Base:");
        scanf("%d",&t[i].base);

        printf("Height:");
        scanf("%d",&t[i].height);
    }
    int max=(t[0].base * t[0].height)/2;

    int max_index=0;
    for(int i=0;i<n;i++)
    {
        if(max<(t[i].base * t[i].height)/2)
        {
            max_index=i;
        }

    }
    printf("\n\nArea of Triangle:%d=",max_index+1);
    triangleprint(t[max_index]);
    printf("\n");
}

void triangleprint(triangle x)
{
    printf("%d",(x.base *x.height/2));
}