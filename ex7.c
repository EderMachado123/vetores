#include<stdio.h>

main(){

    int vetor[10], maior, posicao;

    for(int i = 0; i < 10; i++){
        printf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for(int i = 0; i < 10; i++){
        printf("\n%d", vetor[i]);

        if(vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
        }
    }
    printf("\n\nMaior valor: %d e posica: %d", maior, posicao);


}