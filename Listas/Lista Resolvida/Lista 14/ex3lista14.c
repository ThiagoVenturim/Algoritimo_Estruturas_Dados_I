
/*3. Crie um programa que permita armazenar o nome, a altura e a data de nascimento de
até 10 pessoas. Cada pessoa deve ser representada por uma struct chamada Pessoa, e a
data de nascimento deve ser outra struct chamada data. Armazene essas structs em um
vetor de 10 posições.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX 10

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[100];
    int altura; 
    Data nascimento;
} Pessoa;

void exibir(Pessoa *pessoa) {
    for (int i = 0; i < MAX; i++) {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: %s", pessoa[i].nome);
        printf("Altura: %d cm\n", pessoa[i].altura);
        printf("Data de nascimento: %02d/%02d/%04d\n", 
               pessoa[i].nascimento.dia,
               pessoa[i].nascimento.mes,
               pessoa[i].nascimento.ano);
    }
}

int main() {
    srand(time(NULL));

    Pessoa *pessoa = (Pessoa *)malloc(MAX * sizeof(Pessoa));

    if (pessoa == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < MAX; i++) {
        printf("\nDigite o nome da pessoa %d: ", i + 1);
        fgets(pessoa[i].nome, sizeof(pessoa[i].nome), stdin);
        pessoa[i].nome[strcspn(pessoa[i].nome, "\n")] = '\0'; // Remove '\n'
        printf("Digite a altura da pessoa %d (em cm): ", i + 1);
        scanf("%d", &pessoa[i].altura);
        getchar();
        pessoa[i].nascimento.dia = rand() % 30 + 1;
        pessoa[i].nascimento.mes = rand() % 12 + 1;
        pessoa[i].nascimento.ano = rand() % 25 + 1980; // Ano entre 1980 e 2004
    }

    exibir(pessoa);
    free(pessoa);
return 0;
}
