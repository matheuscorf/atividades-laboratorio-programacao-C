#include <stdio.h>
typedef struct {
 char nome[50];
 int idade;
 float salario;
} Funcionario;

int main(void) {
 Funcionario funcionario1;
 printf("Nome: ");
 scanf(" %49s[^\n]", funcionario1.nome);
 
 printf("Idade: ");
 scanf("%d", &funcionario1.idade);
 
 printf("salario: ");
 scanf("%f",  &funcionario1.salario);

 printf("\n---DADOS DO FUNCIONÁRIO---");

 printf("\nFuncionario1: %s\n", funcionario1.nome);
 printf("Idade: %d\n", funcionario1.idade);
 printf("salario: %.1f\n", funcionario1.salario);

printf("\n---FUNCIONÁRIO 2---");

 Funcionario funcionario2;
 printf("\nNome: ");
 scanf(" %49s[^\n]", funcionario2.nome);
 
 printf("Idade: ");
 scanf("%d", &funcionario2.idade);
 
 printf("salario: ");
 scanf("%f",  &funcionario2.salario);
 
printf("\n---DADOS DO FUNCIONÁRIO---");
 printf("\nFuncionario2: %s\n", funcionario2.nome);
 printf("Idade: %d\n", funcionario2.idade);
 printf("salario: %.1f\n", funcionario2.salario);
 
if (funcionario1.salario > funcionario2.salario){
    printf("\nO salário do primeiro funcionário é maior.");
}
else if (funcionario2.salario > funcionario1.salario){
    printf("\nO salário do segundo funcionário é maior.");
}
else if(funcionario1.salario = funcionario2.salario){
    printf("\nOs salários são iguais");
}
else{
    printf("ERRO");
}

return 0;
}
