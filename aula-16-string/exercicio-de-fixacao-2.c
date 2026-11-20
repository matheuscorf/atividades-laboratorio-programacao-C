#include <stdio.h>
int main(void){
    char nome[30];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Olá, seu nome é: %s\n", nome);
}

