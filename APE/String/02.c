#include <stdio.h>
#define TAM 200


int main (){
char frase[TAM];
int i, cont, palavras=1;

    //Recebendo a frase do Usuário e verificando tamanho. (podemos usar a função strlen)
    puts ("Digite uma frase:");
    scanf("%[^\n]s", frase);
    for (i=0; frase[i] !='\0'; i++);
    //Contando as palavras procurando espaço entre elas. O contador inicia com 1, pois teremos pelo menos 1 palavra digitada.
    for (cont = i-1; cont>=0; cont--){
        if (frase[cont] == ' '){
            ++palavras;
        }
    }
    //Imprimindo a quantidade de palavras.
    printf("O total de palavras sao: %d", palavras);

    return 0;
}
