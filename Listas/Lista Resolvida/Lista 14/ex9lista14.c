/*
 Faça um programa que utilize uma struct para armazenar os dados de um funcionário
de uma empresa. A estrutura deve conter os seguintes campos: nome (string de até 50
caracteres), idade (inteiro), sexo (caractere, podendo ser ’M’ ou ’F’), CPF (string), data
de nascimento (outra struct com dia, mês e ano), código do setor onde trabalha (inteiro
entre 0 e 99), cargo (string de até 30 caracteres) e salário (float). Os dados devem ser
informados pelo usuário, armazenados na struct e, em seguida, exibidos na tela.

*/
#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[50];
    int idade;
    char sexo; 
    char cpf[15]; 
    Data nascimento;
    int setor;
    char cargo[30];
    float salario;
} Funcionario;

int main() {
    Funcionario p1;
    printf("Digite o nome: ");
       fgets(p1.nome, 50, stdin);
    printf("Digite a idade: ");
        scanf("%d", &p1.idade);
    printf("Digite o sexo (M/F): ");
        scanf(" %c", &p1.sexo);
    if (p1.sexo != 'M' && p1.sexo != 'F') {
        printf("Erro: sexo inválido.\n");
        return 1;
    }
    printf("Digite o CPF: ");
        scanf("%s", p1.cpf);
    printf("Digite a data de nascimento (dd mm aaaa): ");
        scanf("%d %d %d", &p1.nascimento.dia, &p1.nascimento.mes, &p1.nascimento.ano);
    printf("Digite o código do setor (0 a 99): ");
     scanf("%d", &p1.setor);
    printf("Digite o cargo: ");
    fflush(stdin); 
        fgets(p1.cargo, 30, stdin);
    printf("Digite o salário: ");
        scanf("%f", &p1.salario);


    printf("Dados do Funcionário \n");
    printf("Nome: %s", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Sexo: %c\n", p1.sexo);
    printf("CPF: %s\n", p1.cpf);
    printf("Nascimento: %02d/%02d/%04d\n", p1.nascimento.dia, p1.nascimento.mes, p1.nascimento.ano);
    printf("Setor: %d\n", p1.setor);
    printf("Cargo: %s", p1.cargo);
    printf("Salario: %.2f\n", p1.salario);

    return 0;
}
