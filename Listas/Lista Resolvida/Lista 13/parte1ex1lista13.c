#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main() {
    FILE *arquivo = fopen("dados.txt", "w");
    int num;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &num);
    getchar();

    char (*nomes)[MAX] = malloc(num * MAX * sizeof(char));
    int *idades = malloc(num * sizeof(int));
    if (arquivo == NULL || nomes == NULL || idades == NULL) {
        printf("Erro ao alocar memória ou abrir o arquivo.\n");
        return 1;
    }
    for (int i = 0; i < num; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        fgets(nomes[i], MAX, stdin);
        
        if (nomes[i][strcspn(nomes[i], "\n")] == '\n') {
            nomes[i][strcspn(nomes[i], "\n")] = '\0';
        }

        printf("Digite a idade de %s: ", nomes[i]);
        scanf("%d", &idades[i]);
        getchar(); 
    }
    for (int i = 0; i < num; i++) {
        fprintf(arquivo, "%s %d\n", nomes[i], idades[i]);
    }
    free(nomes);
    free(idades);
    fclose(arquivo);

    return 0;
}