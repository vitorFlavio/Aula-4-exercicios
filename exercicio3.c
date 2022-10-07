#include <stdio.h>
#include <stdlib.h>

int main () {

    int i,n=20,vet[n],npar=0,nimpar=0,soma=0;


    printf("Os numeros pares são: ");
    for ( i = 0; i < n; i++){
        
        vet[i]=i;

        if(vet[i]%2==0){

            npar++;

            printf("%d ",vet[i]);


        }else if(vet[i]%2!=2){

            nimpar++;
            soma+=vet[i];

        }
        
    }
    printf("\n");
        
        printf("Quantidade dos numeros:\n1.Pares:%d\n2.Impares:%d\n",npar,nimpar);
        printf("A soma dos numeros impares é: %d",soma);

    




    return 0;
}