#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 50

typedef struct{
    char marca[MAX] ;
    char modelo[MAX] ;
    int anoFabricacao;
    float quilometragem;
    float consumo;
}Veiculo;


int main(){
    int tamanho;
    float km;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    Veiculo *carros= (Veiculo *)malloc(tamanho*sizeof(Veiculo));
    if(carros==NULL){
        printf("Erro ao alocar ");
        return 1;
    }
    for(int i=0; i<tamanho;i++){
        fflush(stdin);
        printf("Digite o carro %d \n", i);
        printf("Escreva a marca: ");
        fgets(carros[i].marca, MAX , stdin);
        printf("Escreva o modelo: ");
        fflush(stdin);
        fgets(carros[i].modelo, MAX , stdin);
        printf("Escreva o Ano de Fabricacao: ");
        scanf("%d", &carros[i].anoFabricacao);
        printf("Escreva a Quilometragem: ");
        scanf("%f", &carros[i].quilometragem);
        printf("Escreva o Consumo: ");
        scanf("%f", &carros[i].consumo);
    }
    printf("Digite a distancia que pretende percorrer: ");
    scanf("%f", &km);

    for(int i= 0; i<tamanho; i++){
        printf("--Carro %d -- \n", i);
        printf("Marca %s \n", carros[i].marca);
        printf("Modelo %s \n ", carros[i].modelo );
        printf("Ano de Fabricacao %d \n", carros[i].anoFabricacao);
        printf("Quilometragem %.2f \n", carros[i].quilometragem);
        printf("Consumo %.2f \n", carros[i].consumo);
        printf( "Para percorer %.2f km deve ter %.2f litros \n", km,km/carros[i].consumo);
    };
free(carros);
return 0;
}