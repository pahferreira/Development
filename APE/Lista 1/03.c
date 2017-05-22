#include <stdio.h>

int main()  {
    float n1, n2, n3, m, mp;
    printf("Digite a primeira nota do aluno: \n");
    scanf("%f", &n1);
    printf("Digite a segunda nota do aluno: \n");
    scanf("%f", &n2);
    printf("Digite a terceira nota do aluno: \n");
    scanf("%f", &n3);
    m = (n1 + n2 + n3) / 3;
    mp = ((n1*2)+(n2*3)+(n3*5))/10;
    printf ("A media e: %f \n E a media ponderada e: %2f", m,mp);
    return 0;
}
