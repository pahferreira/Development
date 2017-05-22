#include <stdio.h>
#define pc 1.50
#define pr 2.00
#define pm 2.00
#define ps 1.50
int main () {
    int c, r, m, s;
    float conta;


    printf("Quantos chocolates foram consumidos? \n");
    scanf("%d", &c);
    printf("Quantos refrigerantes foram consumidos? \n");
    scanf("%d", &r);
    printf("Quantos mistos quente foram consumidos? \n");
    scanf("%d", &m);
    printf("Quantos sorvetes foram consumidos? \n");
    scanf("%d", &s);
    conta=(c*pc)+(r*pr)+(m*pm)+(s*ps);
    printf("A sua conta deu: R$ %f", conta);
    return 0;
}
