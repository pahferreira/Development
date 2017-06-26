#include <stdio.h>
int main () {
int numeros[4], i, u, teste=1;
    for (i=0;i<4;i++){
        printf("Digite o %d Valor: \n", i+1);
        scanf("%d", &numeros[i]);
    }
    for (i=0;i<4;i++) {
        for (u=i+1;u<4;u++) {
            if (numeros[i] != numeros[u]) {
                teste = 1;
            }else{
                teste = 0;
            }
        }
    }
    if (teste == 0) {
        printf("Possui numeros IGUAIS!");
    }else{
        printf("DISTINTOS!");
    }

    return 0;
}
