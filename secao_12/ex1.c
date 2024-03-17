#include <stdio.h>
#include <string.h>

int main() {

    struct st_cadastro{
        char nome[100];
        int idade;
        char endereco[100];
    };

    struct st_cadastro cadastro1;
    
    printf("Diga o nome: \n");
    fgets(cadastro1.nome, 100, stdin);

    printf("Diga a idade: \n");
    scanf("%d", &cadastro1.idade);
    getchar();

    printf("Diga o endereco: \n");
    fgets(cadastro1.endereco, 100, stdin);

    printf("\nDados printados:\n\nNome: %sIdade: %d\nEndereco: %s\n", cadastro1.nome, cadastro1.idade, cadastro1.endereco);

    return 0;
}