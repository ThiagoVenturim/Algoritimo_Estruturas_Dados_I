#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 30 
int preencher(int *vetor, int n){
if(n==0){
    return 0;
}else{
    *vetor=rand()%100+1;
    if(*vetor % 2 != 0){
       return 1 + preencher(vetor+1, n-1);
    }
    return preencher(vetor+1, n-1);
}
}

int soma(int *vetor, int n){
    if(n==0){
        return 0;
    }else{
        return *vetor + soma(vetor+1, n-1);
    }
}

int imprimir(int *vetor, int n){
    if(n==0){
        return 0;
    }else{
        printf("%d ", *vetor);
        return imprimir(vetor+1, n-1);
    }
}


int main(){
    int *vetor, *impar, cont, j=0;
    srand(time(NULL));
    vetor= malloc(MAX * sizeof(int));
    if (vetor == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    } 
    cont = preencher(vetor, MAX);
    printf("Vetor com numeros aleatorios: ");
    imprimir(vetor, MAX);
    impar = malloc(cont * sizeof(int));
    if (impar == NULL) {
        printf("Memory allocation failed\n");
        free(vetor);
        return 1;
    }
    for(int i = 0; i<MAX; i++){
        if(*(vetor+i)%2 != 0){
            *(impar +j) = *(vetor+i);
            j++;
        }
        if(j == cont){
            break;
        }
    }
    printf("\nVetor de impares: ");
    imprimir(impar, cont);
    free(impar);

    printf(" \n Soma dos elementos do vetor e  %d\n", soma(vetor, MAX));
    free(vetor);
return 0;
}