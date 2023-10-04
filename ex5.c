#include <stdio.h>

main()
{

    int vetor[10],pares = 0;

    for(int i = 0, i < 8; i++){
        
        printf("Digite os numeros");
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0){
            pares++;
        }
    }
    printf("\n\nA quantidade de pares existentes no vetor e: %d", pares);
}