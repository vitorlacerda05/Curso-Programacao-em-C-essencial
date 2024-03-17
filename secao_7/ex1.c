#include <stdio.h>

int main() {

    //declarei um vetor de 25 lugares
    int n[24];
    int contador = 97, i;

    for (i = 0; i <= 24; i++) {
        n[i] = contador;
        contador = contador + 1;
        printf("%d = %c\n", n[i], n[i]);
    }

    return 0;
}