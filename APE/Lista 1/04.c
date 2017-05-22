#include <stdio.h>

int main () {
    int distancia;
    float segundos;
    printf("Digite a distancia em metros: \n");
    scanf("%d", &distancia);
    segundos = distancia/20;
    printf("Tempo para percorrer a distancia e de %f segundos", segundos);
    return 0;
}
