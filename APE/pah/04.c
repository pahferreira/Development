#include <stdio.h>
#define ROW 2
#define COLUMN 5

int main () {
int i,j, app=0;
float media, alunos[ROW][COLUMN], soma;

    for (i=0;i<ROW;i++){
        printf("Digite sua matricula: \n");
        scanf("%f", &alunos[i][0]);
        soma=0;
        for (j=1;j<(COLUMN-1);j++){
            printf("Digite a %d Nota: \n", j);
            scanf("%f", &alunos[i][j]);
            soma += alunos[i][j];
        }
        media = (soma)/(3.0);
        alunos[i][4] = media;
    }
    for (i=0;i<ROW;i++){
        printf("Matricula Aluno: %d\nMedia: %.2f\n", (int)alunos[i][0], alunos[i][4]);
        alunos[i][4] >= 7 ? puts("APROVADO!"), app++ : puts("REPROVADO!");
    }
    printf("Alunos aprovados: %d", app);

    return 0;
}
