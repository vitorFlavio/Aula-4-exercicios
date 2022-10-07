#include <stdio.h>
#include <stdlib.h>

int main () {

    int vetA[]={15,20,3,1,26,2},i,soma=0;


    for(i=0;i<6;i++){

        soma+=vetA[i];

    }
    printf("A soma é %d",soma);




    return 0;
}