// Aula 17 - Questao 2: cadastro de produtos de uma loja de informatica
// Usa strlen(), strcmp(), strcpy() e strcat().

#include <stdio.h>
#include <string.h>

int main(void) {
    char produto[50];
    char categoria[20];
    char copiaProduto[50];
    char descricao[100] = "Produto: ";
    char categoriaDescricao[20];

    printf("===== CADASTRO DE PRODUTOS =====\n\n");

    printf("Nome do produto: ");
    scanf(" %49[^\n]", produto);

    printf("Categoria (HARDWARE ou PERIFERICO): ");
    scanf("%19s", categoria);

    if (strcmp(categoria, "HARDWARE") == 0) {
        strcpy(categoriaDescricao, "Hardware");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        strcpy(categoriaDescricao, "Periferico");
    } else {
        printf("\nCategoria invalida! Use HARDWARE ou PERIFERICO.\n");
        return 1;
    }

    strcpy(copiaProduto, produto);

    strcat(descricao, copiaProduto);

    printf("\n===== RESUMO =====\n");
    printf("Produto: %s\n", produto);
    printf("Caracteres: %zu\n", strlen(produto));
    printf("Categoria: %s\n", categoriaDescricao);

    printf("\nDescricao: %s\n", descricao);
    printf("Cadastro concluido!\n");

    return 0;
}
