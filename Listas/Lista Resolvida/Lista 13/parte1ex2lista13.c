#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main(){
FILE * arquivo = fopen("dados.txt", "r");
char nome[MAX];
int idade;

if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo para leitura.\n");
    return 1;
}

printf("\nConteúdo de 'dados.txt':\n");
while (fscanf(arquivo, "%s %d", nome, &idade) == 2) {
    printf("Nome: %s\tIdade: %d\n", nome, idade);
}

fclose(arquivo);


    return 0;
}