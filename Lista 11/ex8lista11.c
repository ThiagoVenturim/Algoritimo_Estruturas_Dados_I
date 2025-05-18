#include <stdio.h>
#define MAX 100
int maiorValor(int vetor[], int tamanho){
    if(tamanho == 1){
        return vetor[0];
    }
    int maior_restante = maiorValor(vetor, tamanho - 1);
    if(vetor[tamanho - 1] > maior_restante){
        return vetor[tamanho - 1];
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
