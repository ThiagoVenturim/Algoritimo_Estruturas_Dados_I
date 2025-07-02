#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 8

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    char titulo[50];
    float duracao;
    Data estreia;
}Filme;

Data gerarData(){
    Data data;
    data.dia= rand()%30+1;
    data.mes= rand()%12+1;
    data.ano= rand()%24+2000;
return data;
}

int main(){
    srand(time(NULL)); 
    Filme *filmes= (Filme* )malloc(MAX * sizeof(Filme));
    if(filmes == NULL){
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for(int i=0; i<MAX; i++){
        printf("Digite o titulo do filme %d: ", i+1);
        scanf("%s", (filmes+i)->titulo);
        printf("Digite a duracao do filme %d (em minutos): ", i+1);
        scanf("%f", &(filmes+i)->duracao);
        (filmes+i)->estreia = gerarData();
    }

    printf("\nLista de Filmes:\n");
    for(int i=0; i<MAX; i++){
        printf("Filme %d:\n", i+1);
        printf("Titulo: %s\n", (filmes+i)->titulo);
        printf("Duracao: %.2f minutos\n", (filmes+i)->duracao);
        printf("Data de Estreia: %02d/%02d/%04d\n", 
               (filmes+i)->estreia.dia, 
               (filmes+i)->estreia.mes, 
               (filmes+i)->estreia.ano);
    }
    free(filmes);
    return 0;
}