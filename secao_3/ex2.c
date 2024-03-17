#include <stdio.h>

//leia um num inteiro
//soma do sucessor do triplo com o antecessor de seu dobro

int main() {

    int num;
    int res;

    printf("Escreva o numero para calcular");
    scanf("%d", &num);

    res = ((num * 3) + 1) + ((num * 2) -1);
    printf ("%d", res);

    return 0;
}