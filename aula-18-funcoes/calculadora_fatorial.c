#include <stdio.h>

int calcularFatorial(int n) {
    int resultado = 1;

    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int main(void) {
    int numero;

    printf("===== CALCULADORA DE FATORIAL =====\n\n");

    printf("Digite um numero (0 a 12): ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 12) {
        printf("\nNumero invalido! Digite um valor entre 0 e 12.\n");
        return 1;
    }

    printf("\nFatorial de %d = %d\n", numero, calcularFatorial(numero));

    return 0;
}
