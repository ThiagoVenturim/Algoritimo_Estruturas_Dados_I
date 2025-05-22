#include <stdlib.h>
#include <stdio.h>
int main(){
 FILE *arquivo = fopen("numeros.bin", "wb");
    int vetor[5] = {10, 20, 30, 40, 50};
    int vetorLido[5];
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    fwrite(vetor, sizeof(int), 5, arquivo);
    fclose(arquivo);
    arquivo = fopen("numeros.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }
    fread(vetorLido, sizeof(int), 5, arquivo);
    fclose(arquivo);
    printf("Valores lidos do arquivo binário:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetorLido[i]);
    }
    printf("\n");



    return 0;
}