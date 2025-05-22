#include <stdio.h>
int main() {
FILE *arquivo = fopen("teste.txt", "w");
if (arquivo == NULL) {
printf("Erro ao abrir o arquivo.\n");
return 1;
}
fprintf(arquivo, "Olá, mundo!\n");
fprintf(arquivo, "Escrevendo no arquivo...\n");
fclose(arquivo);
return 0;
}