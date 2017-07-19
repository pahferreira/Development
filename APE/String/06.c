#include <stdio.h>
#include <string.h>
#define TAM 6
int main () {
  char concat[100] = "", temp[10], frases[TAM][1000];
  int i, j, k, x, cont;

  for (i=0;i<TAM;i++){
    puts("Digite uma frase: ");
    scanf(" %[^\n]s", frases[i]);
    cont = strlen(frases[i]);
    for (j=0;j<cont;j++){
      if (frases[i][j] == ' '){
        frases[i][j] = frases [i][j+1];
        for (k=j;k<cont;k++){
          frases[i][k] = frases [i][k+1];
        }
      }
    }
  }
  for (i=5;i>=0;i--){
    x = strlen(frases[i]);
    if (x >= 4){
        strrev(frases[i]);
        strncat(concat, frases[i], 4);
        strrev(frases[i]);
        if (i > 0) {
            strcat(concat, " ");
        }
    }
  }
    printf("Frase:\n%s", strrev(concat));
    return 0;
}
