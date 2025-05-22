#include <stdio.h>
int main() {
    FILE *arquivo = fopen("teste.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    return 1;
    }
    printf("Arquivo aberto com sucesso");
    fclose(arquivo);
    return 0;
}