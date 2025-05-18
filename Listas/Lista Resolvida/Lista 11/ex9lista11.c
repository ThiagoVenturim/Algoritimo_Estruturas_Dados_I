#include <stdio.h>
#define MAX 100

int maiorValor(int *vetor, int tamanho){
    if(tamanho == 1){
        return *vetor;
    }
    int maior_restante = maiorValor(vetor + 1, tamanho - 1);
    if(*vetor > maior_restante){
        return *vetor;
    } else {
        return maior_restante;
    }
}

int main(){
    int vetor[MAX];
    int tamanho;
    printf("Digite o tamanho: ");
    scanf("%d", &tamanho);
    printf("Preencha o vetor: ");
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }
    int maior = maiorValor(vetor, tamanho);
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] == maior){
            printf("O maior valor e %d na posicao %d\n", vetor[i], i);
            break;
        }
    }

    return 0;
}
