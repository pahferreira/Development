#include <stdio.h>
#define TAM 200
int main () {
char frase[TAM];
int  i, cont = 0;

    //Recebendo a frase e contando os caracteres.
    puts ("Digite uma frase:");
    scanf("%[^\n]s", frase);
    for (i=0; frase[i] !='\0'; i++);
    //Imprimindo ao contrário
    for (cont = i-1; cont>=0; cont--){
        printf("%c", frase[cont]);
    }

    return 0;
}
