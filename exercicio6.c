#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int nQuestoes = 10, numAluno, nAlunos = 0, nAlunosAprovados=0;
    char respostas[nQuestoes], gabarito[nQuestoes];
   

    
   

  
        printf("Digite o gabarito para %d questoes\n", nQuestoes);
        for(int i=0; i<nQuestoes;i++){
            printf("Digite resposta questão %d: ",(i+1));
            scanf("%c",&gabarito[i]);
            getchar();
            
        }
    
    
    printf("Gabarito:\n");
    for(int i=0; i<nQuestoes;i++){
        printf("%c ",gabarito[i]);
    }
    printf("\n");
    
    
    printf("Digite a mátricula do aluno: ");
    scanf("%d",&numAluno);



    while(numAluno != 9999){
        nAlunos++;
        for(int i=0; i<nQuestoes; i++){
            getchar();
            printf("Digite a resposta %d: ",(i+1));
            scanf("%c",&respostas[i]);            
        }
        
       
        for(int i=0; i<nQuestoes; i++){
            printf("%c ",respostas[i]);
        }
        printf("\n");
        
        

        int nAcertos=0;
        for(int i=0; i<nQuestoes;i++){
            if(respostas[i] == gabarito[i]){
                nAcertos++;
            }
        }
        
        printf("Aluno %d com %d acertos\n",numAluno,nAcertos);
        if(nAcertos >=6){
            nAlunosAprovados++;            
        }
        
        printf("Digite a mátricula do aluno: ");
        scanf("%d",&numAluno);

    }
    
    float percAprovados = ((float)nAlunosAprovados/(float)nAlunos)*100.0;
    
    printf("Percentual de aprovacao: %.2f%%\n",percAprovados);
    
    
    return 0;
}
