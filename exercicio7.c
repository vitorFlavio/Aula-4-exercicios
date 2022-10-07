#include <stdio.h>
#include <stdlib.h>

int main() {

    int FLAG_TESTE = 1;
    int nVoos = 4;
    int numUsuario;
    int numVoos[nVoos];
    int quantAssentos[nVoos];
    
    if(FLAG_TESTE == 1){
        for(int i=0; i<nVoos; i++){
            numVoos[i] = i*10;
            quantAssentos[i] = 3;
        }
    }else{
        for(int i=0; i<nVoos; i++){
            printf("Digite o numero e os assentos"
                    "do voo %d: ",(i+1));
            scanf("%d",&numVoos[i]);
            scanf("%d",&quantAssentos[i]);
        }
    }
    
    for(int i=0; i<nVoos; i++){
        printf("Voo: %d com %d assentos: \n",
                numVoos[i],quantAssentos[i]);
    }
    
    printf("Digite o número do usuário: ");
    scanf("%d",&numUsuario);
    while(numUsuario != 9999){
        
        int vooEscolhido;
        printf("Digite o voo: ");
        scanf("%d",&vooEscolhido);
        
        int achouVoo = 0;
        for(int i=0; i<nVoos; i++){
            if(vooEscolhido == numVoos[i]){
                achouVoo = 1;
                if(quantAssentos[i] > 0){
                    printf("Reserva para usuario %d para voo %d\n",numUsuario, vooEscolhido);
                    quantAssentos[i]--;
                }else{
                    printf("Não há assento para voo %d\n",vooEscolhido);
                }
            }
        }
        if(achouVoo == 0){
            printf("Voo %d não encontrado!\n",vooEscolhido);
        }
        
        printf("Digite o número do usuário: ");
        scanf("%d",&numUsuario);        
        
    }

    
    
    
    
    return (EXIT_SUCCESS);
}
