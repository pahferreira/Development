#include <stdio.h>
#include <string.h>
#define TAM 6

int main () {
char frases[TAM][1000], concat = "", temp[100];
int i, id;
    for (i=0;i<TAM;i++){
        printf("Digite uma frase: \n");
        scanf(" %[^\n]s", frases[i]);
        if (strlen(frases[i]) >= 4){
        id = strlen(frases[i]) - 4;
        strncpy(temp, frases[i], id);
        strcat(concat, temp);
        }
    }
    printf("%s", concat);
    return 0;
}
