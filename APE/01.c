#include <stdio.h>
#define TAM 5
int main () {
  int vetor[TAM], i, teste=0, resp = 1;
  for (i = 0; i < TAM; i++){
    printf("Digite o numero %d", i+1);
    scanf("%d", &vetor[i]);
  }
  do{
    printf("Digite um numero: ");
    scanf("%d", &resp);
    for (i = 0; i < TAM; i++){
      if (vetor[i] == resp){
        teste = 1;
        break;
      }else{
        teste = 0;
      }
    }
    if (resp != 0){
      switch (teste) {
        case (0): puts("NÃO EXISTE!"); break;
        case (1): puts("EXISTE!");
      }
    }
  } while (resp != 0);
  return 0;
}
