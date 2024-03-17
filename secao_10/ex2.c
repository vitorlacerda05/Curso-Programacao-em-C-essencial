#include <stdio.h>

/*
faça um programa que leia 2 valores inteiros e 
chame uma função que receba estas 2 variávels e 
troque seu conteúdo. 
*/

//prototipo da funcao
int funcao(int* pont_1, int* pont_2);

int main(){
    int valor1, valor2;

    printf("Escreva o valor 1\n");
    scanf("%d", &valor1);

    printf("Escreva o valor 2\n");
    scanf("%d", &valor2);

    printf("Valor antes da troca %d, %d\n", valor1, valor2);

    //a funcao tem q pegar o valor1 com &, pois uso um vetor como entrada que vai apontar para &valor1
    //faco isso para utilizar a mesma variavel, e não uma cópia das variáveis
    //quando eu coloco como entrada para funcao uma variavel, ele cria uma copia da variavel e não modifica a original
    //a variavel original teria o mesmo valor
    //faco isso quando eu quero usar outra variavel de fora da funcao dentro da funcao
    funcao(&valor1, &valor2);

    printf("Valor depois da troca %d, %d\n", valor1, valor2);

    return 0;
}

//funcao vai ter como entrada o ponteiro pont_1 que vai apontar para &valor1
//assim modifica o valor de valor1, e não de sua cópia
int funcao(int* pont_1, int* pont_2){
    int temp = *pont_1;
    *pont_1 = *pont_2;
    *pont_2 = temp;
}