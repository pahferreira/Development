#include <stdio.h>
#define TAM 200


int main (){
char frase[TAM];
int i, cont, palavras=1;

    //Recebendo a frase e verificando o tamanho.
    puts ("Digite uma frase:");
    scanf("%[^\n]s", frase);
    for (i=0; frase[i] !='\0'; i++);
    //Procurando os espaços em branco e substituindo-os por #.
    for (cont = i-1; cont>=0; cont--){
        if (frase[cont] == ' '){
            frase[cont] = '#';
        }
    }
    //Imprimindo a nova frase
    for (cont = 0; cont < i; cont++){
        printf("%c", frase[cont]);
    }

    return 0;
}
