#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MAX 4

void preencher(int *matrix, int tamanho){
    int media=0; 
    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho; j++){
            *(matrix+i*tamanho+j) = rand()%100+1;
            printf(" %d", *(matrix + i*tamanho+j));
            media+= *(matrix+i*tamanho+j);
        }
        printf(" \n");
    }
return;
}

int somaDiagonal(int *vetor, int tamanho){
int soma=0;
    for(int i=0;i<tamanho; i++){
        for(int j= 0; j<tamanho; j++){
            if(j==i){
                soma+= *(vetor+i*tamanho+j);
                break;
            }
        }
    }
return soma;
}

int main(){
    int *matrix;
    srand(time(NULL));
    matrix= (int *) malloc ( pow(MAX, 2) * sizeof(int));
    if(matrix==NULL){
        printf("Erro ao alocar memoria ");
        return 1;
    }
    preencher(matrix, MAX);
    printf(" %d", somaDiagonal(matrix, MAX));
     free(matrix);
return 0;
}