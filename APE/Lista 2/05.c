#include <stdio.h>
int main () {
int vetor[20], i, u, troca;
    for (i=0;i<20;i++) {
        printf("Digite o numero %d para o vetor: \n", i+1);
        scanf("%d", &vetor[i]);
    }
    for (i=19, u=0;u<10;i--, u++){
        troca = vetor[u];
        vetor[u] = vetor[i];
        vetor[i] = troca;
    }
    printf("\n");
    for (i=0;i<20;i++) {
        printf("%d \n", vetor[i]);
    }
    return 0;
}
