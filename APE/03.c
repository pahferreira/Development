#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 10

int main () {
  char tab[TAM][TAM], ifpb[] = "IFPB";
  int i, j, random, points=0, id;
  
  srand(time(NULL));
  for (i = 0; i < TAM; i++){
    for(j = 0; j < TAM; j++){
      random = rand() % 4;
      tab[i][j] = ifpb[random];
    }
  }
  for (i = 0; i < TAM; i++){
    for(j = 0; j < TAM; j++){
      printf(" %c ", tab[i][j]);
    }
    puts("");
  }
  for (i = 0; i < TAM; i++){
    if (strstr(tab[i], "IFPB") || strstr(tab[i], "BPFI")){
      points+= 10;
    }
  }
  for (i = 0; i < TAM; i++){
    for(j = 0; j < TAM; j++){
      if (tab[j][i] == 'I' && tab[j+1][i] == 'F' && tab[j+2][i] == 'P' && tab[j+3][i] == 'B'){
        points+=10;  
      }
    }
  }
  for (i = 0; i < TAM; i++){
    for(j = 0; j < TAM; j++){
      if (tab[j][i] == 'B' && tab[j+1][i] == 'P' && tab[j+2][i] == 'F' && tab[j+3][i] == 'I'){
        points+=10; 
      }
    }
  }
  printf("Pontos: %d", points);
  return 0;
}
