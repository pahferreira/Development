#include <stdio.h>
int main () {
int vetorA[4], vetorB[4], vetorC[4], i;
    for (i=0;i<4;i++){
        printf("Digite o valor %d para o vetor A: \n", i+1);
        scanf("%d", &vetorA[i]);
        printf("Digite o valor %d para o vetor B: \n", i+1);
        scanf("%d", &vetorB[i]);
        vetorC[i] = vetorA[i] + vetorB[i];
    }
    printf("\n");
    for (i=0;i<4;i++) {
        printf("%d\n", vetorC[i]);
    }
    return 0;
}
