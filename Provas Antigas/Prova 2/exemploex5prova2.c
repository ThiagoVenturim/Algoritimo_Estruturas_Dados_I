#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void preencher(int *matrix, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
        matrix[i * tamanho + j]= rand()%100+1;
       printf(" %d",  matrix[i * tamanho + j]);
        }
        printf(" \n");
    }
return;
}

double soma(int *matrix, int tamanho) {
    double soma = 0;
    for (int i = 1; i < tamanho; i++) {
        for (int j = 0; j < i; j++) {
            soma += matrix[i * tamanho + j];
        }
    }
    return soma;
}

int mult3(int *matrix, int tamanho) {
    int cont = 0;
    for (int i = 1; i < tamanho; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i * tamanho + j] % 3 == 0) {
                cont++;
            }
        }
    }
    return cont;
}

int main() {
    int *matrix, tamanho;
    srand(time(NULL));
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho inválido.\n");
        return 1;
    }

    matrix = (int *) malloc(tamanho * tamanho * sizeof(int));
    if (matrix == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    preencher(matrix, tamanho);

    printf("Quantidade de múltiplos de 3 abaixo da diagonal principal: %d\n", mult3(matrix, tamanho));
    printf("Soma dos elementos abaixo da diagonal principal: %.2lf\n", soma(matrix, tamanho));

    free(matrix);
    return 0;
}
