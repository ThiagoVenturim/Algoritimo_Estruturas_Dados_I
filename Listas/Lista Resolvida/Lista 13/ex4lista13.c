#include <stdio.h>
int main(){
       FILE *arquivo = fopen("teste.txt", "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
    return 1;
    }
    fclose(arquivo);
    return 0;
}