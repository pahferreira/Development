#include <stdio.h>
#define ROW 3
#define COLUMN 4

int main () {
int matriz[ROW][COLUMN], i, j, maior=0, idmaior, soma=0;

    for (i=0;i<ROW;i++){
        for (j=0; j<COLUMN; j++) {
            printf("Digite um valor para a linha %d, coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i=0;i<ROW;i++){
        soma = 0;
        for (j=0; j<COLUMN; j++) {
            soma += matriz[i][j];
        }
        if (soma > maior) {
            idmaior = i+1;
            maior = soma;
        }
    }
    printf("A linha %d possui a maior soma, com: %d\n", idmaior, maior);

    return 0;
}
