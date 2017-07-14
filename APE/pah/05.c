#include <stdio.h>
#define ROW 4
#define COLUMN 6

int main () {
int anos[] = {2011, 2012, 2013, 2014, 2015, 2016}, carros[ROW][COLUMN], i, j, maior[6] = {}, idmaior[6] = {}, somaanual, maiorsoma=0, idmaiorsoma, soma;
float medias[4];

    for (i=0;i<ROW;i++){
        for (j=0;j<COLUMN;j++){
            printf("Quantos carros foram produzidos pela FABRICANTE %d no ano %d: \n", i+1, anos[j]);
            scanf("%d", &carros[i][j]);
            if (carros[i][j] > maior[j]) {
                maior[j] = carros[i][j];
                idmaior[j] = i+1;
            }
        }
        system("cls");
    }
    for (j=0;j<COLUMN;j++){
        somaanual = 0;
        for (i=0;i<ROW;i++){
            somaanual += carros[i][j];
        }
        if (somaanual > maiorsoma){
            maiorsoma = somaanual;
            idmaiorsoma = anos[j];
        }
    }
    for (i=0;i<4;i++){
        soma=0;
        for (j=0;j<COLUMN;j++){
            soma += carros[i][j];
        }
        medias[i] = ((float)soma) / 6;

    }
    printf("O ano com maior numero de vendas foi %d, com: %d vendas!\n", idmaiorsoma, maiorsoma);
    for (i=0;i<6;i++){
        printf("No ano %d, o fabricante com o maior numero de vendas foi: %d\n", anos[i], idmaior[i]);
    }
    for (i=0;i<4;i++){
        printf("O fabricante %d, teve uma media de: %.2f carros vendidos\n", i+1, medias[i]);
    }


    return 0;
}
