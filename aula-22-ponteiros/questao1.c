#include <stdio.h>
int main(void) {
 int idade;

 printf("Digite o valor sua idade: ");
 scanf("%d", &idade);
 printf("Valor da idade: %d\n", idade);
 printf("Endereco da variavel idade: %p\n", (void *)&idade);
 return 0;
}
