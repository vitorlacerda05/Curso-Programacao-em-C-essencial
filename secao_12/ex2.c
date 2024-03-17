#include <stdio.h>

int main(){
    struct st_aluno{
        char nome[100];
        int numeroMatricula;
        char curso[100];
    };
    
    struct st_listaAluno{
        struct st_aluno listaAluno[5];
    }lista;

    for (int i = 0; i < 5; i++)
    {
        printf("Nome do aluno %d:\n", i+1);
        fgets(lista.listaAluno[i].nome, 100, stdin);

        printf("Numero de matricula do aluno %d:\n", i+1);
        scanf("%d", &lista.listaAluno[i].numeroMatricula);
        getchar();

        printf("Curso do aluno %d:\n", i+1);
        fgets(lista.listaAluno[i].curso, 100, stdin);

        printf("\n");
    }
    
    printf("\n\n===== Dados dos 5 alunos ======");

    for (int i = 0; i < 5; i++)
    {
        printf("\n\nDados do aluno %d:\n", i+1);
        printf("\nNome: %s", lista.listaAluno[i].nome);
        printf("Numero de Matricula: %d", lista.listaAluno[i].numeroMatricula);
        printf("\nCurso: %s", lista.listaAluno[i].curso);
    };

    return 0;
}