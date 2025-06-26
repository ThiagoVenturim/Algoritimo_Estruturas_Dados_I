#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
typedef struct{
    int dia;
    int mes;
    int ano;
}Data;
typedef struct{
    char nome[50];
    float altura;
    Data nascimento;
}Pessoa;

void PreencherData(Pessoa *pessoas){
    pessoas->nascimento.dia= rand()%30+1;
    pessoas->nascimento.mes= rand()%12+1;
    pessoas->nascimento.ano= rand()%125+1900;
}

int main(){
    srand(time(NULL));
    Pessoa *pessoas = (Pessoa*)malloc(MAX*sizeof(Pessoa));
    if(pessoas==NULL){
        printf("Erro ao alocar memoria");
        return 1;
    }
    for(int i=0; i<MAX; i++){
        printf("Digite o Nome: ");
        scanf(" %[^\n]", pessoas[i].nome );
        printf("Digite o a Altura em Metros: ");
        scanf(" %f", &pessoas[i].altura );
        PreencherData( pessoas+i);
    } 
    for(int i=0; i<MAX; i++){
        printf("Nome: [ %s ],",  pessoas[i].nome);
        printf("Altura: [ %.2f ] , ", pessoas[i].altura);
        printf("Data de Nascimento: [ %d/%d/%d ] \n", (pessoas+i)->nascimento.dia, (pessoas+i)->nascimento.mes, (pessoas+i)->nascimento.ano );
    }
free(pessoas);
return 0;
}
