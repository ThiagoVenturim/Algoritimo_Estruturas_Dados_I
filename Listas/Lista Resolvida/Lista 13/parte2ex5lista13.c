#include <stdio.h>
#include <stdlib.h>

int main(){
FILE *arquivo = fopen("notas.txt" , "r");
char  nome[100];
float nota;

if( arquivo == NULL){
    printf("Erro ao abrir arquivo");
    return 1;
}
    while (fscanf(arquivo, "%s %f", nome, &nota) == 2) {
        printf("Aluno: %s\tNota: %.2f\n", nome, nota);
    }

fclose(arquivo);
    return 0;
}

