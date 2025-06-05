/* Na questão anterior crie uma função que peça o nome de uma banda ao usuário e diga se
ela está entre suas bandas favoritas ou não.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 2
typedef struct{
    char nome [50];
    char estiloMusical [30];
    int numeroIntegrantes ;
    int posicaoRanking; 
}Banda;

void mostrar(Banda *bandas){
    for(int i=0; i<MAX; i++){
        printf("Nome da Banda: %s", (bandas+i)->nome);
        printf("Estilo musical: %s", (bandas+i)->estiloMusical);
        printf("Numero de integrantes: %d \n", (bandas+i)->numeroIntegrantes);
        printf("Rank: %d \n", (bandas+i)->posicaoRanking);
            
        printf(" \n");
    }
 return;   
}

int temounao(Banda *bandas, int tam, char *escolha){
if(tam==0){
    return 0;
}else{
    if (strcmp( (bandas)->nome, escolha) == 0) {
            return 1;
    }
    return temounao( bandas+1,  tam-1, escolha);
}


}

int main(){
    Banda *bandas= (Banda*)malloc(MAX *sizeof(Banda));
    char escolha[50];
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
    mostrar(bandas);

    printf(" Digite uma banda a para verficar ");
    fgets(escolha, 50, stdin);

    if(temounao(bandas, MAX, escolha) == 1){
        printf(" A escolha contem na lista");
    }else{
        printf(" A escolha nao contem na lista");
    }

    free(bandas);
return 0;    
}
