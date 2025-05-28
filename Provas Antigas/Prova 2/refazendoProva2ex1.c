#include <stdio.h>
#include <stdlib.h>
#define MAX  15 
int Produto(int *vetor, int tamanho){
if(tamanho == 0){
    return 1;
}else{
    return *vetor * Produto(vetor + 1, tamanho - 1);
}
}

int main(){
    int *vetor= (int *) malloc(MAX * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memoria \n");
        return 1;
    }
    printf("Digite %d numeros inteiros:\n", MAX);
    for(int i = 0; i < MAX; i++) {
       scanf("%d", (vetor+i));
    }
    printf(" O produto dos numeros e: %d\n", Produto(vetor, MAX));
    free(vetor);
return 0;
}