#include <stdio.h>
#define ROW 2
#define COLUMN 3

int  main () {
int matriz1[ROW][COLUMN], matriz2[ROW][COLUMN], soma[ROW][COLUMN], i, j;

    for (i=0;i<ROW;i++){
        for (j=0;j<COLUMN;j++){
            printf("Escreva um numero para a PRIMEIRA matriz: \n");
            scanf("%d", &matriz1[i][j]);
        }
    }
    for (i=0;i<ROW;i++){
        for (j=0;j<COLUMN;j++){
            printf("Escreva um numero para a SEGUNDA matriz: \n");
            scanf("%d", &matriz2[i][j]);
        }
    }
    for (i=0;i<ROW;i++){
        for (j=0;j<COLUMN;j++){
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    for (i=0;i<ROW;i++){
        for (j=0;j<COLUMN;j++){
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }
    return 0;
}
