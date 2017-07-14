#include <stdio.h>
#define TAM 200
int main () {
char frase[TAM];
int  i, cont = 0;

    puts ("Digite uma frase:");
    scanf("%[^\n]s", frase);
    for (i=0; frase[i] !='\0'; i++);

    for (cont = i-1; cont>=0; cont--){
        printf("%c", frase[cont]);
    }

    return 0;
}
