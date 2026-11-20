#include <stdio.h>
int main(void){

char palavra[50];
int contadorvogais = 0;

printf("Digite aqui sua palavra: ");
scanf("%49s", palavra);

for(int i = 0; palavra[i] != '\0'; i++){
    if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra [i] == 'u'){
         contadorvogais++;
    }
}

printf("O numero de vogais na sua palavra é: %d\n", contadorvogais);
return 0;
}

