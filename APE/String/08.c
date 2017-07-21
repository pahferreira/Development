#include <stdio.h>
#include <string.h>

#define TAM 10

int main () {
    char matricula[TAM][11];
    int i;

    //Recebendo as Matrículas
    for (i=0;i<TAM;i++) {
      printf("Digite sua matricula:\n");
      scanf("%[^\n]s", &matricula[i]);
      getchar();
    }
    //Calculando se os contratados possuiam 18 anos e imprimindo os que atendem essa condição.
    for (i=0;i<TAM;i++) {
      //Lógica Matemática: Se o penúltimo digito for maior que 1, com certeza ele tem mais de 18 anos.
      //Logica Matemática 2: Se o penúltimo digito é igual a 1, temos que verificar se o último é maior que 8.
      if ((matricula[i][8] > '1') || (matricula[i][8] = '1' && matricula[i][9] >= '8')) {
        printf("O funcionario da matricula %s foi contratado com 18 anos ou mais.\n", matricula[i]);
      }
    }
  return 0;
}
