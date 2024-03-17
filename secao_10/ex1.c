#include <stdio.h>

int main(){
    int a;
    float b;
    char c;
    int d[5];
    int i;

    int* pont_a;
    float* pont_b;
    char* pont_c;
    int* pont_d;

    //aqui vai apontar pro endereço de memória de a
    //tem que apontar pro endereço e não pro valor
    pont_a = &a;
    pont_b = &b;
    pont_c = &c;

    //no caso de variavel eu não preciso usar & pois ja é ponteiro
    pont_d = d;

    //modificar valor de var
    *pont_a = 120;
    *pont_b = 1.123;
    *pont_c = 'b';
    *d = 0;

    //modificar valor de lista
    *(d+1) = 1;
    *(d+2) = 2;
    *(d+3) = 3;
    *(d+4) = 4;

    printf("%d\n", a);
    printf("%f\n", b);
    printf("%c\n", c);

    for (i = 0; i <= 4; i++) {
        printf("%d\n", d[i]);
    }
    
    return 0;
}