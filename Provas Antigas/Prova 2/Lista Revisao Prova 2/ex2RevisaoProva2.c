/* 2. (Vetor com ponteiros e alocação dinâmica) Implemente um programa em C que
leia um vetor de 10 números inteiros. Em seguida, o programa deve:
a) Criar um segundo vetor contendo apenas os números pares do primeiro vetor, utilizando ponteiros.
b) Utilizar alocação dinâmica para armazenar o segundo vetor e imprimir seus elementos.
*/

#include <stdlib.h>
#include <stdio.h>

#define TAM 10

int main(){
    int *vetor ,*pares;
    int pare=0;
    vetor = (int*) malloc(TAM * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }      
    printf("Digite %d numeros inteiros:\n", TAM);
    for (int i=0; i<TAM; i++){
        scanf("%d", vetor+i);
        if( * (vetor+i)% 2 == 0){
            pare++;
        }
    }
    pares = (int*) malloc(pare * sizeof(int));
    if (pares == NULL) {
        printf("Erro ao alocar memória para o vetor de pares.\n");
        free(vetor);
        return 1;
    }
    for(int i=0, j=0; i<TAM; i++){
        if(*(vetor+i) % 2 == 0){
            *(pares+j) = *(vetor+i);
            printf("%d ", *(pares+j));
            j++;
          
        }
        if(j ==pare){
            break;
        }
    }
return 0;
}