#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char codigoCurso[10];
    char copiaNome[50];
    char mensagem[100] = "Ola, ";
    char curso[40];

    printf("===== IDENTIFICACAO ACADEMICA =====\n\n");

    printf("Nome do estudante: ");
    scanf("%49s", nome);

    printf("Codigo do curso (CC ou SI): ");
    scanf("%9s", codigoCurso);

    if (strcmp(codigoCurso, "CC") == 0) {
        strcpy(curso, "Ciencia da Computacao");
    } else if (strcmp(codigoCurso, "SI") == 0) {
        strcpy(curso, "Sistemas de Informacao");
    } else {
        printf("\nCodigo de curso invalido! Use CC ou SI.\n");
        return 1;
    }

    strcpy(copiaNome, nome);

    strcat(mensagem, copiaNome);
    strcat(mensagem, "!");

    printf("\n===== RESULTADO =====\n");
    printf("Estudante: %s\n", nome);
    printf("Curso: %s\n", curso);
    printf("Caracteres no nome: %zu\n", strlen(nome));

    printf("\n%s\n", mensagem);

    return 0;
}
