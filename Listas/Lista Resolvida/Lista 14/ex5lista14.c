/*Crie uma struct chamada Banda, contendo os seguintes campos: nome (string de até 50
caracteres), estiloMusical (string de até 30 caracteres), numeroIntegrantes (inteiro) e
posicaoRanking (inteiro). No programa principal, crie um vetor com 5 bandas e utilize
um laço de repetição para preencher os dados de cada uma delas. Após o preenchimento,
exiba todas as informações das bandas cadastradas
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5
typedef struct{
    char nome [50];
    char estiloMusical [30];
    int numeroIntegrantes ;
    int posicaoRanking; 
}Banda;

void mostrar(Banda *bandas, int tam){
    for(int i=0; i<tam; i++){
        printf("Nome da Banda: %s", (bandas+i)->nome);
        printf("Estilo musical: %s", (bandas+i)->estiloMusical);
        printf("Numero de integrantes: %d", (bandas+i)->numeroIntegrantes);
        printf("Rank: %d ", (bandas+i)->posicaoRanking);
            
        printf(" \n");
    }
 return;   
}

int main(){
    Banda *bandas= (Banda*)malloc(MAX *sizeof(Banda));
    if( bandas == NULL){
        printf("Erro ao alocar");
        return 1;
    }

    for(int i=0; i<MAX; i++){
        printf("Digite o nome da Banda: ");
        fflush(stdin);
        fgets((bandas+i)->nome, 50, stdin);
        printf("Digite o estilo musical: ");
        fgets((bandas+i)->estiloMusical, 30, stdin);
        printf("Digite o numero de integrantes: ");
        scanf(" %d", &(bandas+i)->numeroIntegrantes);
        printf("Digite o Rank: ");
        scanf(" %d", &(bandas+i)->posicaoRanking);
        fflush(stdin);
    }

mostrar(bandas, MAX);
free(bandas);
return 0;    
}
