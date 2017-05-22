#include <stdio.h>
int main () {
    int ano, idade;

    printf("Qual o ano de seu nascimento? ");
    scanf("%d", &ano);
    idade=2017-ano;
    printf("Sua idade é: %d", idade);

    return 0;
}
