#include <stdio.h>
#include <stdlib.h>

void preencher(int *matrix, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            
            scanf("%d ", &matrix[i * tamanho+ j]);
        }
        printf("\n");
    }
return;
}

float soma(int *matrix, int tamanho){
float soma=0;
for(int i=1; i<tamanho; i++){
    for(int j=0; j<tamanho; j++){
        if(j==i){
            soma += *(matrix+i * tamanho+ j);
        }else if(j>i){
            break;
        }
    }
}
    return soma;

}


int mult3(int *matrix, int tamanho){
int cont=0;
for(int i=0; i<tamanho; i++){
    for(int j=0; j<tamanho; j++){
        if(j < i){
            if( *(matrix+i*tamanho+j)%3==0 ){
                cont ++;
            }
        }
    }
}
    return cont;
}


int main(){
    int *matrix, tamanho;
    scanf(" %d", &tamanho);
    matrix = (int *) malloc((tamanho * tamanho) * sizeof(int));
    if (matrix == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    preencher(matrix,  tamanho);
    printf(" sao multiplos  %d abaixo da diagoal principal", mult3( matrix,  tamanho));
    printf(" a soma e %d ", soma( matrix,  tamanho));
free (matrix);
return 0;
}