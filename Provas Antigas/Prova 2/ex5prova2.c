#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int maiorvalor(int *matrix, int tamanho, int *soma){
int maior= *matrix; 
for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho ; j++){
            *soma += *(matrix+i*tamanho+j);
            if(*(matrix+i*tamanho+j) > maior){
                maior= *(matrix+i*tamanho+j);
            }
        }
    }     
return maior; 
}


int main(){
    int *mtx, tamanho, soma=0;
    scanf(" %d", &tamanho);
    mtx= (int *) malloc(pow(tamanho, 2)* sizeof(int));
    if(mtx==NULL){
        printf("Erro");
        return 1;
    } 
    for(int i=0; i<tamanho; i++){
        for(int j=0; j<tamanho ; j++){
            scanf( "%d", (mtx+i*tamanho+j));
        } 
    }   
    printf("A soma dos elementos foi %d e o maior elemento e %d", soma, maiorvalor(mtx, tamanho , &soma));   
    free(mtx); 
    return 0;
}