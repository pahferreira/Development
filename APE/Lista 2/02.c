#include <stdio.h>
int main () {
int numeros[10], i;
    for (i=0;i<10;i++){
        printf("Digite um numero: \n");
        scanf("%d", &numeros[i]);
    }
    for (i=0;i<10;i++){
        if (numeros[i] < 0) {
            printf("NEGATIVO\n");
        }else {
            printf("%d\n", numeros[i]);
        }
    }
    return 0;
}
