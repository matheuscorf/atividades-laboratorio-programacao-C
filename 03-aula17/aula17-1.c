#include <stdio.h>
#include <string.h>
int main()
{
    char nome[50];
    char perfil[20];
    char mensagem[50] = "Bem vindo(a), ";
    
    printf("Digite seu primeiro nome: ");
    scanf("%49s", nome);

    printf("Digite o perfil do usuário: ");
    scanf("%20s", perfil);

    printf("Quantidade de caracteres: %zu\n", strlen(nome));
    printf("Perfil: %zu\n", strcmp(pefil));
    printf("Bem vindo(a)", strcpy(nome));





}