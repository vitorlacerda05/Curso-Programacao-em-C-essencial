#include <stdio.h>

//leia um valor em metros e converta em jardas
//formula é j = m/0,91

int main() {

    float m;
    float j;

    printf("Escreva o valor em metros");
    scanf("%f", &m);

    j = m / 0.91;

    printf("O valor convertido é %f", j);

    return 0;
}