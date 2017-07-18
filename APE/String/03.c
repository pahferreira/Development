#include <stdio.h>
#include <string.h>

int main () {
char palavras[30], frase[1000] = "";
int  qtde = 0;

    do {
        printf("Digite uma palavra: ");
        scanf("%s", palavras);
        if (strcmp(palavras, "acabou") != 0){
            strcat(frase, palavras);
            strcat(frase, " ");
            qtde++;
        }
      } while (strcmp(palavras, "acabou") != 0);
    printf("A frase e: %s\n", frase);
    printf("A quantidade de palavras foi: %d", qtde);


    return 0;
}
