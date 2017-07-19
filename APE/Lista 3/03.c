#include <stdio.h>
#define ROW 4
#define COLUMN 3

int main () {
int matriz[ROW][COLUMN], transposta[COLUMN][ROW], i, j;

    for (i=0;i<ROW;i++){
        for (j=0;j<COLUMN;j++){
            printf("Escreva um numero para a matriz: \n");
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i=0;i<ROW;i++){
        for (j=0;j<COLUMN;j++){
            transposta[j][i] = matriz[i][j];
        }
    }
    for (i=0;i<COLUMN;i++){
        for (j=0;j<ROW;j++){
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }
    return 0;
}
