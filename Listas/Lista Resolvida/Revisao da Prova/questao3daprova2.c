#include <stdio.h>
#include <stdlib.h>
void preencher(int *vetor, int tamanho){
    printf("Preencha o vetor:\n");
for(int i = 0; i < tamanho; i++) {
        scanf("%d", vetor+i);
    }
}
float produto(int *vetor, int tamanho) {
    if(tamanho == 0) {
        return 1;
    }else{
        return *vetor * produto(vetor + 1, tamanho - 1);
    }
}
int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if(vetor == NULL) {
        printf("Memória insuficiente!\n");
        return 1;
    }
    preencher(vetor, tamanho);
    printf("O produto dos elementos do vetor é: %.2f\n",  produto(vetor, tamanho));
    
    free(vetor);
    return 0;
}