#include <stdio.h>
#define TAM 200


int main (){
char frase[TAM];
int i, j, cont, vogais=0, especiais=0, consoantes = 0;

    puts ("Digite uma frase:");
    scanf("%[^\n]s", frase);
    for (i=0; frase[i] !='\0'; i++);
    for (cont = i-1; cont>=0; cont--){
        for (j=0; j<65;j++){
            if ((int)frase[cont] == j){
                especiais++;
            }
        }
        if (frase[cont] == 'a' || frase[cont] == 'e' || frase[cont] == 'i' || frase[cont] == 'o' || frase[cont] == 'u'){
            vogais++;
    }else {
        if ((int)frase[cont] > 64){
        consoantes++;
        }
    }
    }
    printf("CARACTERES: %d \n", especiais);
    printf("VOGAIS: %d \n", vogais);
    printf("CONSOANTES: %d \n", consoantes);


    return 0;
}

