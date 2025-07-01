#include <stdio.h>
#include <stdlib.h>

int main() {
    int L, C;
    scanf("%d %d", &L, &C);

    if (L < 3 || L > 500 || C < 3 || C > 500) {
        return 1;
    }

    char *string = (char *) malloc((C + 1) * sizeof(char)); 
    char *matriz = (char *) malloc(L * C * sizeof(char));

    if (string == NULL || matriz == NULL) {
        return 1;
    }

    for (int i = 0; i < L; i++) {
        scanf("%s", string);
        for (int j = 0; j < C; j++) {
            if (string[j] == '#' && ((i + 1) % 2 != 0 || j == 0 || j == C - 1)) {
                return 1;  // '#' só pode em colunas impar e nas bordas
            }
            matriz[i * C + j] = string[j];
        }
        fflush(stdin);
    }

    // Aplicação das regras (como exemplo: "se for '.' e vizinho for 'o', vira 'o'")
    for (int i = 1; i < L - 1; i++) {
        for (int j = 1; j < C - 1; j++) {
            int pos = i * C + j;
            if (matriz[pos] == '.') {
                if (
                    matriz[(i - 1) * C + j] == 'o' ||
                    (matriz[i * C + (j - 1)] == 'o' && matriz[(i + 1) * C + (j - 1)] == '#') ||
                    (matriz[i * C + (j + 1)] == 'o' && matriz[(i + 1) * C + (j + 1)] == '#')
                ) {
                    matriz[pos] = 'o';
                }
            }
        }
    }

    // Impressão da matriz resultante
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("%c", matriz[i * C + j]);
        }
        printf("\n");
    }

    free(string);
    free(matriz);
    return 0;
}
