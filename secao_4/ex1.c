#include <stdio.h>
#include <math.h>

/*
leia um numero real, se for positivo, imprima a raiz quadrada
se for negativo, imprima o numero ao quadrado
diga se é positivo ou negativo
*/

main(){
    
    float num;
    char pos;

    printf("Digite um numero: \n");
    scanf("%f", &num);

    if (num >= 0) {
        num = sqrt(num);
        pos ='p';
    }else{
        num = num * num;
        pos ='n';
    }

    printf("O resultado final e %f\n", num);
    printf("O numero era %c\n", pos);
    return 0;
}