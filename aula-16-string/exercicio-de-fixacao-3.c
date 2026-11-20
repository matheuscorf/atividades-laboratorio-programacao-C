#include <stdio.h>
int main(void){
    char palavra[50];

printf("Digite sua palavra: ");
    scanf("%49s", palavra);

printf("A primeira letra da sua palavra é: %c\n", palavra[0]);

return 0;
}

