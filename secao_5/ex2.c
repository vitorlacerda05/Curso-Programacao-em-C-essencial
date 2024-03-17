#include <stdio.h>

int main(){

    int num, i, soma = 0;

    printf("Escreva um numero inteiro para calcular a soma de todos os seus divisores inteiros\n");
    scanf("%d", &num); 

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            soma = soma + i;
            printf("\n%d", i);
        }
        
    }
    
    printf("A soma de todos os divisores é: %d", soma);

    return 0;
}