#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int n=5,i,result[n],valor1[n],valor2[n];


    for(i=0;i<n;i++){

        valor1[i]=i+2;
        valor2[i]=i+1;

        result[i]=valor1[i]+valor2[i];

    }
        printf("O resultado das operações é:");

    for(i=0;i<n;i++){


        printf("%d ",result[i]);

    }
    
    
    return 0;
}