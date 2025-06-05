#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 2

typedef struct {
    int matricula;
    char nome[50];
    float nota[3];
} Aluno;

int encontrarMaiorNota1(Aluno *turma, int tamanho) {
    int indiceMaior = 0;
    for (int i = 1; i < tamanho; i++) {
        if (turma[i].nota[0] > turma[indiceMaior].nota[0]) {
            indiceMaior = i;
        }
    }
    return indiceMaior;
}

void calcularMedias(float *medias, Aluno *turma, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        medias[i] = (turma[i].nota[0] + turma[i].nota[1] + turma[i].nota[2]) / 3.0;
        if (medias[i] >= 6.0)
            printf("%s: Aprovado (Média: %.2f)\n", turma[i].nome, medias[i]);
        else
            printf("%s: Boa sorte na Proxima (Média: %.2f)\n", turma[i].nome, medias[i]);
    }
}

void maiorMenorMedia(float *medias, Aluno *turma, int tamanho) {
    int indiceMaior = 0, indiceMenor = 0;

    for (int i = 1; i < tamanho; i++) {
        if (medias[i] > medias[indiceMaior])
            indiceMaior = i;
        if (medias[i] < medias[indiceMenor])
            indiceMenor = i;
    }

    printf("\nAluno com maior média: %s (%.2f)\n", turma[indiceMaior].nome, medias[indiceMaior]);
    printf("Aluno com menor média: %s (%.2f)\n", turma[indiceMenor].nome, medias[indiceMenor]);
}

int main() {
    Aluno *turma = malloc(MAX * sizeof(Aluno));
    float *medias = malloc(MAX * sizeof(float));
    if (!turma || !medias) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < MAX; i++) {
        printf("\n--- Dados do aluno %d ---\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &turma[i].matricula);
        getchar(); // Limpa o \n do buffer
        printf("Nome: ");
        fgets(turma[i].nome, 50, stdin);
        turma[i].nome[strcspn(turma[i].nome, "\n")] = '\0'; // Remove \n

        for (int j = 0; j < 3; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &turma[i].nota[j]);
        }
    }
    int indiceMaiorNota1 = encontrarMaiorNota1(turma, MAX);
    printf("\nAluno com maior nota na primeira prova: %s (%.2f)\n", turma[indiceMaiorNota1].nome, turma[indiceMaiorNota1].nota[0]);

    printf("\nSituação dos alunos:\n");
    calcularMedias(medias, turma, MAX);

    maiorMenorMedia(medias, turma, MAX);

    free(turma);
    free(medias);
    return 0;
}
