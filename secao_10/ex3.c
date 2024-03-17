#include <stdio.h>

int main(){

    int a, temp;
    int* b = &a;
    int* c = b;
    int* d = c;

    printf("Escreva o valor de a\n");
    scanf("%d", &a);
    temp = a;

    *b = 2 * a;
    printf("%d\n", *b);
    a = temp;

    *c = 3 * (*b);
    printf("%d\n", *c);
    a = temp;

    *d = 4 * (*c);
    printf("%d\n", *d);

    return 0;
}