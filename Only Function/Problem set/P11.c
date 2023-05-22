//Function to take a string as input and find its length.
#include<stdio.h>
#include<string.h>
int len(char str[100])
{
    int i=0,lenght=0;

    while(str[i]='\0'){
        lenght++;
        i++;
    }
    return printf("%d",lenght);

}

int main(){
    char a[100];

    fgets(a,sizeof(a),stdin);
    a[strcspn(a,"\n")]='\0';

    len(a);
}