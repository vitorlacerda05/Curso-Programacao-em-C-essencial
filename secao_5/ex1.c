#include <stdio.h>

main(){

    int i = -1;
    float num=10, media, soma = 0;
    
    while (num >= 10 && num <= 20) {
        printf("Escreva sua nota\n");
        scanf("%f", &num);
        soma = soma + num;
        i = i + 1;
    }
    
    media = soma / i;
    printf("A media final e: %f", media);
    return 0;
}