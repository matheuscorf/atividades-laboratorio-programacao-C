#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char perfil[20];
    char confirmacao[50];
    char mensagem[100] = "Bem-vindo(a), ";
    char perfilDescricao[20];

    printf("===== CADASTRO DE USUARIOS =====\n\n");

    printf("Digite seu nome: ");
    scanf("%49s", nome);

    printf("Digite seu perfil (ADMIN ou COMUM): ");
    scanf("%19s", perfil);

    if (strcmp(perfil, "ADMIN") == 0) {
        strcpy(perfilDescricao, "Administrador");
    } else if (strcmp(perfil, "COMUM") == 0) {
        strcpy(perfilDescricao, "Comum");
    } else {
        printf("\nPerfil invalido! Use ADMIN ou COMUM.\n");
        return 1;
    }

    strcpy(confirmacao, nome);

    strcat(mensagem, confirmacao);
    strcat(mensagem, "!");

    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", nome);
    printf("Quantidade de caracteres: %zu\n", strlen(nome));
    printf("Perfil: %s\n", perfilDescricao);

    printf("\n%s\n", mensagem);
    printf("Cadastro realizado com sucesso.\n");

    return 0;
}
