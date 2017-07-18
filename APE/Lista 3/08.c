#include <stdio.h>
#define ROW 3
#define COLUMN 3
#define TAM 7

int main () {
    int i,j, matriz[ROW][COLUMN], total, soma[TAM], teste=0, x=0;
    for (i=0;i<ROW;i++){
        total = 0;
        for (j=0; j<COLUMN; j++) {
            printf("Digite um valor para a linha %d, coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            total += matriz[i][j];
        }
        soma[i] = total;
    }
    for (j=0;j<ROW;j++){
        total = 0;
        for (i=0; i<COLUMN; i++) {
            total += matriz[i][j];
        }
        x = j+3;
        soma[x] = total;
    }
    total = 0;
    for (i=0; i<ROW; i++){
        total += matriz[i][i];
    }
    soma[TAM-1] = total;
    for (i=0; i<TAM; i++){
        for (j=i+1; j<TAM;j++){
            if (soma[i] != soma[j]){
                teste = 1;
            }
        }
    }
    for (i=0;i<ROW;i++){
        for (j=0; j<COLUMN; j++) {
            printf("%d ", matriz[i][j]);
        }
        puts("");
    }
    if (teste == 1){
        puts("A Matriz nao e um quadrado magico!");
    }else{
        puts("QUADRADO MAGICO UOOOU!");
    }
    for (j=0; j<TAM; j++) {
            printf("%d ", soma[j]);
        }
    return 0;
}
