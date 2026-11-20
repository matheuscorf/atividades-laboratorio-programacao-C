#include <stdio.h>
int main(void) {
 char palavra[50];
 int caracteres = 0;

 printf("Digite a palavra e veja quantos caracteres ela tem: ");
 scanf("%49s", palavra);
 
for (int i= 0; palavra[i] != '\0'; i++) {
    caracteres++;
 }

 printf("O número de caracteres dessa palavra é: %d\n", caracteres);
 
 return 0;
}

