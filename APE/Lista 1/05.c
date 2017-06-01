#include <stdio.h>

int main () {
    int d, m, a, meses, resultado;

    printf("Vamos calcular sua data transformada em segundos!");
    printf("Digite o dia: \n");
    scanf("%d", &d);
    printf("Digite o mes: \n");
    scanf("%d", &m);
    printf("Digite o ano: \n");
    scanf("%d", &a);
    meses = (a * 12) + m;
    d = d + (meses * 30);
    resultado = (d * 24) * 3600;
    printf("O Resultado em segundos e: %d", resultado);

    return 0;
}
