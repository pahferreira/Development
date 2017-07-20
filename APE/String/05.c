#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main (){
    char frase[101];
    int i, vogal, cons, spec;
    vogal = cons = spec = 0;

    //Obtendo a frase.
    printf("Digite a frase: ");
    gets(frase);
    for (i = 0; frase[i] != '\0'; i++){
        //Verificando se na string, possui os caracteres equivalentes as vogais
        if (strchr("aeiou", frase[i])){
            vogal++;
            }else
            //Verificando se existe cosoantes
            if (isalpha(frase[i])){
                cons++;
            //Se Não é vogal nem consoante, o que sobra é especial.
            }else{
                spec++;
            }
    }
    //Imprimindo Resultados
    printf("VOGAIS: %d\n", vogal);
    printf("CONSOANTES: %d\n", cons);
    printf("ESPECIAIS: %d\n", spec);
    return 0;
}
