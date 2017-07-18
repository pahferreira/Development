#include <stdio.h>
#include <string.h>

int main () {
char frase[1000];
int i, qtde = 0;

    for (i=0;i<6;i++){
        puts("Digite uma frase:");
        scanf(" %[^\n]s", frase);
        if (strstr(frase, "IFPB")) {
            qtde++;
        }
    }
    printf("Frases com IFPB: %d", qtde);
    return 0;
}
