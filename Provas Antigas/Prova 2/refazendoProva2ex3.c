#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 4

void preencherMatrix(int *matrix, int tam){
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            *(matrix + i * tam + j) = rand() % 100+1;
            printf("%d ", *(matrix + i * tam + j));
        }
        printf("\n");
}
return;
}


int calculaSoma(int *matrix, int tamanho){
int soma =0;
for (int i=0; i<tamanho ;i++){
    for (int j=0 ; j < tamanho ; j++){
        if(tamanho-i-1 ==j ){
           soma += *(matrix + i * tamanho + j);
        }

    }
}
return soma;
}

int main(){
    int *matrix = (int *)malloc(MAX * MAX * sizeof(int));
    srand(time(NULL));
    if (matrix == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    preencherMatrix(matrix, MAX);
    printf("Soma dos elementos da diagonal segundaria: %d\n", calculaSoma(matrix, MAX));
    free(matrix);


return 0;    
}