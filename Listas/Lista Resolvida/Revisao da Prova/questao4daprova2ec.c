#include <stdio.h>
#include <stdlib.h>

int somar(int *vetor, int tamanho){
    if(tamanho==0){
        return 0;
    }else{
        return *vetor + somar(vetor+1 , tamanho-1);
    }
}

int main(){
    int tamanho;
    printf("Digite o tamanho do vetor");
    scanf("%d", &tamanho);
    int *vetor = (int *)malloc(tamanho*sizeof(int));
    if(vetor==NULL){
        printf("Erro ao alocar");
        return 1;
    }
    printf("Digite vetor");
    for(int i=0; i<tamanho; i++){
        scanf("%d", (vetor+i));
    }
    printf("A soma dos elementos do seu vetor e %d", somar(vetor,tamanho));
    free(vetor);
    return 0;
}