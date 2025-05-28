/*(Vetor – recursividade e ponteiros) Implemente uma função recursiva em C que
receba um vetor de inteiros e seu tamanho, e retorne o maior valor presente no vetor. A
função deve utilizar apenas aritmética de ponteiros.
*/

#include <stdio.h>
#include <stdlib.h>

int maiorValor(int *vetor, int tamanho, int maior){
    if(tamanho ==0){
        return maior;
    }else{
        if(*vetor > maior){
            maior = *vetor;
        }
            return maiorValor(vetor + 1, tamanho - 1, maior);
    }
}


int main(){
    int *vetor, tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    vetor = (int*) malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Memória insuficiente!\n");
        return 1;
    }
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", vetor + i);
    }
    printf("O maior valor do vetor e: %d\n", maiorValor(vetor, tamanho, *vetor));
    free(vetor);

return 0;
}