#include <stdio.h>

void frac(float num, int* inteiro, float* frac);

int main() {

    float numero;
    int pont_int;
    float pont_float;
    
    printf("Escreva o numero: ");
    scanf("%f", &numero);

    frac(numero, &pont_int, &pont_float);

    printf("Parte inteira: %d\n", pont_int);
    printf("Parte fracionada: %f\n", pont_float);

    return 0;
}

void frac(float num, int* inteiro, float* frac){

    *inteiro = (int)num;
    *frac = num - *inteiro;
}