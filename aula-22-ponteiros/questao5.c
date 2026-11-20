#include <stdio.h>

int main(void) {
    int vetor[5];
    int *ponteiro = vetor;   // o nome do vetor ja e o endereco do primeiro elemento

    for (int i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nElementos do vetor (acessados pelo ponteiro):\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(ponteiro + i));
    }

    return 0;
}
