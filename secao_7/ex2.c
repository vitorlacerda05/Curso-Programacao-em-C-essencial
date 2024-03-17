#include <stdio.h>

/*
Leia um vetor com 10 numeros inteiros e ordene os 
elementos deste vetor de forma crescente.
Sem utilizar algoritmo de ordenação
*/

int main(){

    int i, temp, j;

    //input da lista com 10 números
    int lista[10];
    for (i = 0; i <= 9; i++){
        printf("Escreva o numero da posicao lista[%d]:\n", i);
        scanf("%d", &lista[i]);
    }

    for (i = 0; i <= 10; i++){

        /*
        comparar o valor na posição i com todos seus sucessores
        utilizo um for que vai de i+1 até 9, comparando com i
        e trocando de posição
        */

        for (j = i + 1; j <= 10; j++) {

            //ordenar um valor com seu próximo valor

            if (lista[i] > lista[j]){
                temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        } 
    }

    printf("\nA lista ordenada e:\n");

    for (i = 0; i <= 9; i++){
        printf("%d ", lista[i]);
    }
    return 0;
}