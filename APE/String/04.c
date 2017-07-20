#include <stdio.h>
#include <string.h>

int main () {
char frase[1000];
int i, qtde = 0;

    //Lendo as 6 frases do usuário e já identificando se possui "IFPB"
    for (i=0;i<6;i++){
        puts("Digite uma frase:");
        scanf(" %[^\n]s", frase);
        //Contando se a frase possui "IFPB"
        if (strstr(frase, "IFPB")) {
            qtde++;
        }
    }
    // Imprimindo o resultado de frases com "IFPB"
    printf("Frases com IFPB: %d", qtde);
    return 0;
}
