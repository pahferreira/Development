#include <stdio.h>
#include <stdlib.h>
#define GAB 5
#define CAND 3

int main () {
  int qtde_acertos[CAND], qtde_acima = 0, i, j, acertos; 
  float media, soma_acertos=0;
  char gabarito[GAB], respostas[GAB], resp;
  
  for (i = 0; i < GAB; i++){
    printf("Digite o gabarito da questão %d", i+1);
    scanf("%c", &gabarito[i]);
    getchar();
  }
  for (j = 0; j < CAND; j++){
    acertos = 0;
    system("CLS");
    printf("CANDIDATO %d\n", j+1);
    for (i = 0; i < GAB; i++){
      printf("Digite a sua resposta da Questão %d", i+1);
      scanf("%c", &resp);
      getchar();
      if (resp == gabarito[i]){
        acertos++;
      }
      qtde_acertos[j] = acertos;
    }
  }
  for (i = 0; i < CAND; i++){
    soma_acertos += qtde_acertos[i];
  }
  media = (soma_acertos) / (CAND);
  for (i = 0; i < CAND; i++){
    if ((float)qtde_acertos[i] >= media){
      qtde_acima++;
    }
  }
  system("CLS");
  for (i = 0; i < CAND; i++){
    printf("O Candidato %d acertou: %d\n", i+1, qtde_acertos[i]);
  }
  printf("A media foi: %.2f\n", media);
  printf("%d candidatos ficaram acima da média", qtde_acima);
  
  
 
  return 0;
}
