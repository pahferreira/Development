#include <stdio.h>
int main () {
int numeros[20], i, N, teste=0, id;
    for (i=0;i<20;i++) {
        printf("Digite um numero: \n");
        scanf("%d", &numeros[i]);
    }
    printf("Escreva Um numero para comparacao: \n");
    scanf("%d", &N);
    for (i=0;i<20;i++) {
        if (N==numeros[i]){
            teste=1;
            id=i;
            break;
        }
    }
    if (teste==1) {
        printf("O indice e: %d", id);
    }else{
        printf("-1");
    }
    return 0;
}
