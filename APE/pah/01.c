#include <stdio.h>
#define TAM 3

int main () {
int i, j, vetor[TAM][TAM], soma1=0, soma2=0, soma3=0;

    for (i=0;i<TAM;i++){
        for (j=0;j<TAM;j++){
            printf("Escreva um numero: \n");
            scanf("%d", &vetor[i][j]);
        }
    }
    for (j=0;j<TAM;j++){
        soma1 += vetor[0][j];
    }
    for (i=0;i<TAM;i++){
        soma2 += vetor[i][2];
    }
    for (i=0;i<TAM;i++){
        soma3 += vetor[i][i];
    }
    printf("Primeira linha: %d\n", soma1);
    printf("Primeira linha: %d\n", soma2);
    printf("Primeira linha: %d\n", soma3);

    return 0;
}
