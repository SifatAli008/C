#include <stdio.h>

int main (){

    char row, column,ch;
    //int ch;
    scanf ("%c",& ch);

    for (row='A'; row<=ch; row++){

        for (column=row; column<=ch; column++){
            printf ("%c ", column);
        }

        printf ("\n");
}
 return 0;

}