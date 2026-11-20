#include <stdio.h>
int main(void) {
 int variavel = 20;
 int *ponteiro;
 ponteiro = &variavel;
 printf("Valor da variavel: %d\n", variavel);
 printf("Endereco da variavel: %p\n", (void *)&variavel);
 printf("Endereco armazenado no ponteiro: %p\n",
 (void *)ponteiro);
 printf("Valor acessado pelo ponteiro: %d\n", *ponteiro);
 return 0;
}
