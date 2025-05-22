#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

#define LINHAS 40
#define COLUNAS 30

void preencher(int *mtx, int x, int y) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            mtx[i * y + j] = rand() % 51;
            printf("%2d ", mtx[i * y + j]);
        }
        printf("\n");
    }
}

int main() {
    int *matrix;
    int soma = 0;
    srand(time(NULL));

    matrix = (int *) malloc((LINHAS * COLUNAS) * sizeof(int));
    if (matrix == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    preencher(matrix, LINHAS, COLUNAS);

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (i == 0 || i == LINHAS - 1 || j == 0 || j == COLUNAS - 1) {
                soma += matrix[i * COLUNAS + j];
            }
        }
    }

    free(matrix);
    printf("\nSoma dos elementos da borda: %d\n", soma);

    return 0;
}
