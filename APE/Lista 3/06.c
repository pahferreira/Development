#include <stdio.h>
#define ROW 3
#define COLUMN 3

int main () {
int matriz[ROW][COLUMN], i, j, teste=0;

    for (i=0;i<ROW;i++){
        for (j=0; j<COLUMN; j++) {
            printf("Digite um valor para a linha %d, coluna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i=0;i<ROW;i++){
        for (j=0; j<COLUMN; j++) {
            if (matriz[i][j] !=0 && matriz[i][j] != 1){
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
        puts("A matriz nao e de permutacao");
    }else{
        puts("A matriz e de permutacao");
    }
    return 0;
}
