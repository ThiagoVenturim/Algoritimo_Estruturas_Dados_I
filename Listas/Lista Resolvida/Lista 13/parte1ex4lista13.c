#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main() {
    FILE *arquivo = fopen("frases.txt", "r");
    char linha[MAX];
    int contador = 0;

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    // Conta cada linha lida
    while (fgets(linha, MAX, arquivo) != NULL) {
        contador++;
    }

    fclose(arquivo);

    printf("O arquivo possui %d linha(s).\n", contador);
    return 0;
}
