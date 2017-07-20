#include <stdio.h>
#include <string.h>

int main () {
char palavras[30], frase[1000] = "";
int  qtde = 0;

    //Loop para receber as palavras
    do {
        //Recebendo as palavras e verificando se são diferentes de "acabou"
        printf("Digite uma palavra: ");
        scanf("%s", palavras);
        if (strcmp(palavras, "acabou") != 0){
            //Concatenando as palavras em um vetor frase vazio, seguidas de um espaço em branco para separá-las e contando as palavras.
            strcat(frase, palavras);
            strcat(frase, " ");
            qtde++;
        }
      } while (strcmp(palavras, "acabou") != 0);
    //Imprimindo a frase formada e a quantidade de palavras usadas.
    printf("A frase e: %s\n", frase);
    printf("A quantidade de palavras foi: %d", qtde);


    return 0;
}
