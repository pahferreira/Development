#include <stdio.h>
#define ORCAMENTO 8000
int main () {
    float p, h, a, r;

    printf("Gastos com passagem: ");
    scanf("%f", &p);
    printf("Gastos com hospedagem: ");
    scanf("%f", &h);
    printf("Gastos com alimentaçao: ");
    scanf("%f", &a);
    r=p+h+a;
    if (r<=ORCAMENTO)
    {
        printf("E possivel realizar sua viagem.");
    }
    else
    {
        printf("Nao e possivel realizar a viagem, nao cabe no orcamento");
    }
    return 0;
}
