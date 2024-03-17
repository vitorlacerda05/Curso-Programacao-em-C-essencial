#include <stdio.h>

//leia o valor de um produto e imprima o valor
//com desconto de 12%

int main() {

    float valor;

    printf("Escreva o valor");
    scanf("%f", &valor);

    printf("O valor com desconto e: %f", (valor*0.88));

    return 0;
}