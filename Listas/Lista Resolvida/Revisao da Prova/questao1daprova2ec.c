#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 20

int contmult3(int *vetor, int tama) {
    if (tama == 0) {
        return 0;
    } else {
        if (*vetor % 3 == 0) {
            return 1 + contmult3(vetor + 1, tama - 1);
        }
        return contmult3(vetor + 1, tama - 1);
    }
}

int main() {
    int j = 0;
    srand(time(NULL));
    int *vetor = (int *)malloc(tam * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    printf("Vetor Principal:");
    for (int i = 0; i < tam; i++) {
        *(vetor + i) = rand() % 100 + 1;
        printf(" %d", *(vetor + i));
    }

    int cont = contmult3(vetor, tam);
    printf("\nTem %d multiplos de 3", cont);

    int *mult3 = (int *)malloc(cont * sizeof(int));
    if (mult3 == NULL) {
        printf("Erro ao alocar memoria\n");
        free(vetor);
        return 1;
    }

    for (int i = 0; i < tam; i++) {
        if (*(vetor + i) % 3 == 0) {
            *(mult3 + j) = *(vetor + i);
            j++;
        }
    }

    printf("\nVetor de multiplos de 3:");
    for (int i = 0; i < cont; i++) {
        printf(" %d", *(mult3 + i));
    }

    free(vetor);
    free(mult3);

    return 0;
}
