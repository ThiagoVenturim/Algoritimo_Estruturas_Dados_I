#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main() {
    char frase[MAX];
    FILE *arquivo = fopen("frases.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite frases (digite 'FIM' para encerrar):\n");

    while (1) {
        fgets(frase, MAX, stdin);
        frase[strcspn(frase, "\n")] = '\0'; 
        if (strcmp(frase, "FIM") == 0) {
            break;
        }
                                            
        fprintf(arquivo, "%s\n", frase);
    }

    fclose(arquivo);
    printf("Frases salvas em 'frases.txt'.\n");
    return 0;
}
