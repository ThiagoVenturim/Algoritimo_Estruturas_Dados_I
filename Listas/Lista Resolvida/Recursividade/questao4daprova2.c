#include <stdio.h>
#include <stdlib.h>
float media(int *matriz, int tamanho) {
    float soma =0, media;
    for(int i=0; i<tamanho*tamanho; i++) {
        soma += *(matriz+i);
    }
    media = soma / (tamanho * tamanho);
    soma=0;
    for(int i=0; i<tamanho*tamanho; i++) {
        if(*(matriz+i) > media) {
            soma += *(matriz+i);
        }
    }

return soma;
}

int main() {
    int tamanho;
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &tamanho);
    int *matriz= (int *)malloc(tamanho * tamanho * sizeof(int));
    if (matriz == NULL) {
        printf("Memória insuficiente!\n");
        return 1;
    }
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            scanf("%d", &matriz[i * tamanho + j]);
        }
    }
    printf("Soma dos elementos acima da média: %.2f\n", media(matriz, tamanho));
    free(matriz);
return 0;
}