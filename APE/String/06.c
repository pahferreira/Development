#include <stdio.h>
#include <string.h>
#define TAM 6
int main () {
  char concat[100] = "", temp[10], frases[TAM][1000];
  int i, j, k, x, cont;
  //Recebendo as frases e verificando tamanho
  for (i=0;i<TAM;i++){
    puts("Digite uma frase: ");
    scanf(" %[^\n]s", frases[i]);
    cont = strlen(frases[i]);
    //Procurando espaços em branco e retirando-os
    for (j=0;j<cont;j++){
      if (frases[i][j] == ' '){
        frases[i][j] = frases [i][j+1];
        for (k=j;k<cont;k++){
          frases[i][k] = frases [i][k+1];
        }
      }
    }
  }
  //Verificando tamanho da String da última para a primeira
  for (i=5;i>=0;i--){
    x = strlen(frases[i]);
    //Caso seja maior que 4, revertemos a string e concatenamos os 4 primeiros caracteres.
    if (x >= 4){
        strrev(frases[i]);
        strncat(concat, frases[i], 4);
        strrev(frases[i]);
        //Concatenamos um espaço em branco caso não seja o último conjunto de caracteres.
        if (i > 0) {
            strcat(concat, " ");
        }
    }
  }
    //Imprimimos a String concatenada ao contrário, pra poder ficar na ordem certa.
    printf("Frase:\n%s", strrev(concat));
    return 0;
}
