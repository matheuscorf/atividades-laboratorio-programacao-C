#include <stdio.h>
// EXERCÍCIOS DE FIXAÇÃO 
// 2 - Ler o nome de uma pessoa e exibi-lo)
int main(void){
    char nome[30];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Olá, seu nome é: %s\n", nome);
}

