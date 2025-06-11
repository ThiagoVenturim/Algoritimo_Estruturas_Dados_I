#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int soma( int *matriz, int tamanho){
int somar=0;
for(int i=0; i<tamanho;i++ ){
        for(int j=0; j<tamanho;j++ ){
        *(matriz+i*tamanho+j) = rand()%100+1;
        printf("%d ",  *(matriz+i*tamanho+j));
            if(j>i){
                somar+= *(matriz+i*tamanho+j);
            }
        }
        printf("\n");
    }
return somar;
}

int main(){
    srand(time(NULL));
    int tamanho;
    printf("Digite o tamanho da matriz");
    scanf("%d", &tamanho);
    int *matriz = (int *)malloc(tamanho*tamanho*sizeof(int));
    if(matriz==NULL){
        printf("Erro ao alocar");
        return 1;
    }
    printf("A soma dos elementos acima da diagonal principal %d", soma(  matriz,tamanho));
    free (matriz);
return 0;
}