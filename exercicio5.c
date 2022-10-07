#include <stdio.h>
#include <stdlib.h>

int main () {

    int n;

    printf("Informe o tamanho do vetor\n");
    scanf("%d",&n);

    int i,vet[n],soma=0;

    
    for ( i = 0; i < n; i++){
     
        vet[i]=i+3;

        if(i%2==0){

            soma+=vet[i];

       
        }


    }
    printf("A soma de todos os elementos de indice par: %d",soma);
    



    return 0;
}