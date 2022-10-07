#include <stdio.h>
#include <stdlib.h>

int main () {

    int n=10,vet[n],i;

    for (i=0;i<n; i++) {
        
        vet[i]=i;

        if(vet[i]==5){

            printf("Apareçe na posicão %d",i);

        }

    }
    


    return 0;
}