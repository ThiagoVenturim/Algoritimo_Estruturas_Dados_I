#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    char titulo[100];
    int paginas;
    Data publicacao;
}Livros;

Data preencher(){
    Data d;
    d.dia = rand() % 30 + 1; // Gera um dia entre 1 e 30
    d.mes = rand() % 12 + 1; // Gera um mes entre 1 e 12
    d.ano = rand() % (2024-1950+1) + 1950; // Gera um ano entre 1950 e 2024
return d;
}
int main(){
Livros *livros= (Livros*)malloc(MAX * sizeof(Livros));
srand(time(NULL));
if (livros == NULL) {
    printf("Erro ao alocar memoria\n");
    return 1;
}
for(int i = 0; i < MAX; i++) {
    printf("Livro %d\n", i + 1);
    printf("Titulo: ");
    scanf(" %[^\n]", (livros + i)->titulo);
    printf("Paginas: ");
    scanf("%d", &(livros + i)->paginas);
    (livros + i)->publicacao = preencher();
}
for(int i = 0; i < MAX; i++) {
    printf("\nLivro %d\n", i + 1);
    printf("Titulo: %s\n", (livros + i)->titulo);
    printf("Paginas: %d\n", (livros + i)->paginas);
    printf("Data de publicacao: %02d/%02d/%04d\n", (livros + i)->publicacao.dia, (livros + i)->publicacao.mes, (livros + i)->publicacao.ano);

}

free(livros);
return 0;
}