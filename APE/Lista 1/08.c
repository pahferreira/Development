#include <stdio.h>

int main () {
    int x, y, div, mod;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o primeiro numero: ");
    scanf("%d", &y);
    div=x/y;
    mod=x%y;
    printf("O quociente e: %d \n E o resto e: %d", div, mod);


    return  0;
}
