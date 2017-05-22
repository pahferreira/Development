#include <stdio.h>
int main () {
    int ano, idade;

    printf("Ano de nascimento? ");
    scanf("%d", &ano);
    idade=2017-ano;
    printf("Sua idade é: %d", idade);

    return 0;
}
