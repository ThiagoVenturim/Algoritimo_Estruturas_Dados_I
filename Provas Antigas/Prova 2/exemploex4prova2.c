#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void simetrica(int *matrix, int *tranporta, int tamanho){
for(int i=0; i<tamanho; i++){
    for(int j=0; j<tamanho; j++){
        *(tranporta+i*tamanho+j)=*(matrix+j*tamanho+i);
        printf(" %d", *(tranporta+i*tamanho+j));
    }
    printf(" \n");
}

for(int i=0; i<tamanho; i++){
        for(int j=1; j<tamanho; j++){
            if( *(matrix+i*tamanho+j) != *(matrix+j*tamanho+i)){
              printf(" Matrix não simetrica");
            return ;
            }
        }
    }
printf(" Matrix simetrica");



    return ;
}



int main(){
    int *matrix, *mt , tamanho;
    printf("Digite o tamanho: ");
    scanf(" %d", &tamanho);
    matrix= (int *) malloc( pow(tamanho, 2) * sizeof(int));
    mt= (int *) malloc( pow(tamanho, 2) * sizeof(int));
    if(matrix==NULL || mt==NULL){
        printf("Erro");
    return 1;
    }
    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho; j++){
            scanf(" %d", matrix+i*tamanho+j);
        }
        printf(" \n");
    }
    
    simetrica(matrix, mt,  tamanho);
    free(mt);
    free(matrix);

    return 0;
}