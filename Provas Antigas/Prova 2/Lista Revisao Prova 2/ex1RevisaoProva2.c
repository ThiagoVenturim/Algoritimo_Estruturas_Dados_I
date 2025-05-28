/*1. (Vetor – números aleatórios) Implemente um programa em C que crie um vetor de 20
números inteiros gerados aleatoriamente no intervalo de 1 a 100. Não pode ter números
repetidos no vetor. O programa deve exibir os valores gerados. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20
int verificar(int *vetor, int tamanho){
    if(tamanho==0){
        return 0;
    }else{
        if(*vetor ==  * (vetor+tamanho)){
            return 1;
        }
        return verificar( vetor, tamanho-1);
    }
}

int main(){
    int *vetor= (int*)calloc(TAM,  sizeof(int));
    srand(time(NULL));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    for(int i = 0; i < TAM; i++) {
        do {    
            *(vetor+i) = rand() % 100 + 1;    
        } while (verificar(vetor, i) == 1);
        printf("%d ", *(vetor+i));
    }

    free(vetor);

return 0;
}
