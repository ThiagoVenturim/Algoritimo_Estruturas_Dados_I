#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAX 10
typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    char nome[50];
    int idade;  
    Data Vacinacao;
}Animal;

Data gerarData(){
    Data d;
    d.dia = rand() % 30 + 1; // Gera um dia aleatório entre 1 e 30
    d.mes = rand() % 12 + 1; // Gera um mês aleatório entre 1 e 12
    d.ano = rand() % 15 + 2010; // Gera um ano aleatório entre 2010 e 2024
    return d;
}

int main(){
    srand(time(NULL));
    Animal *animais= (Animal*) malloc(MAX * sizeof(Animal));
    if (animais == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    for(int i = 0; i < MAX; i++){
        printf("Digite o nome do animal %d: ", i + 1);
        scanf("%s", (animais+i)->nome);
        printf("Digite a idade do animal %d: ", i + 1);
        scanf("%d", &(animais+i)->idade);
        (animais+i)->Vacinacao = gerarData();
    }
    printf("\nAnimais cadastrados:\n");
    for(int i = 0; i < MAX; i++){
        printf("Animal %d:\n", i + 1);
        printf("Nome: %s\n", (animais+i)->nome);
        printf("Idade: %d\n", (animais+i)->idade);
        printf("Data de Vacinação: %02d/%02d/%04d\n", (animais+i)->Vacinacao.dia, (animais+i)->Vacinacao.mes, (animais+i)->Vacinacao.ano);
    }
    free(animais);
return 0;
}