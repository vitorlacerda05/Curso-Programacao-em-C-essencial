#include <stdio.h>

main() {

    float p_antigo;
    printf("Escreva o preco antigo\n");
    scanf("%f", &p_antigo);

    if (p_antigo <= 50.0){
        p_antigo = p_antigo * 1.05;
    } else if (p_antigo > 50.0 && p_antigo <= 100){
        p_antigo = p_antigo * 1.1;
    } else {
        p_antigo = p_antigo * 1.15;
    }
    
    printf("O preco novo e igual a %f", p_antigo);

    return 0;
}