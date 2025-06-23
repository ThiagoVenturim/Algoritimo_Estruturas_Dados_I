#include <stdio.h>
#include <stdlib.h>
  #include <string.h>
#define MAX 5

typedef struct{
    char nome[50];
    char estilo[50];
    int inte;
    int rank;
}Bandas;

int simNao(Bandas *p1, char pesquisa[]){
for(int i=0; i< MAX; i++){
        if (strcmp( (p1+i)->nome, pesquisa ) == 0) {
            return 1;
        }
}
return 0;
}

int main(){
    Bandas *p1 =(Bandas*) malloc(MAX*sizeof(Bandas));
    if(p1==NULL){
        printf("Erro ao alocar ");
        return 1;
    }
    char pesquisa[50];
    for(int i=0; i< MAX; i++){
        printf("--------BANDA %d--------\n", i);
        printf("Digite o nome: ");
        scanf(" %[^\n]", p1[i].nome);
        printf("Digite o estilo: ");
        scanf(" %[^\n]", p1[i].estilo);
        printf("Digite o numero de integrantes: ");
        scanf(" %d", &p1[i].inte);
        printf("Digite o Rank: ");
        scanf(" %d", &p1[i].rank);
    }
    printf("Digite a banda que quer pesquisar: ");
    scanf(" %[^\n]", pesquisa);
    if (simNao(p1, pesquisa) == 1) {
        printf("Tem a banda: %s, na lista de bandas\n", pesquisa);
    } else {
        printf("Nao tem a  banda:  %s, na lista de bandas\n", pesquisa);
    }
     for(int i=0; i< MAX; i++){
        printf("--------BANDA %d--------\n", i);
        printf("Nome: %s\n", p1[i].nome);
        printf("Estilo: %s\n",p1[i].estilo );
        printf("Numero de integrantes: %d\n",p1[i].inte);
        printf("Rank: %d \n", p1[i].rank);
     }
free(p1);
return 0;
}