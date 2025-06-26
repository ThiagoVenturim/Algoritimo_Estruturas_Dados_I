#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX 1000
typedef struct{
    int dia; 
    int mes;
    int ano;
}Data;

typedef struct{
    char Nome[50];
    char Autor[50];
    char Genero[50];
    Data Lanca; 
    int Paginas;
    
}Livro;  

void preencher(Livro * livros, int tamanho){
    for(int i =0; i<tamanho; i++){
        printf("------Preencher Livro %d------\n", i);
        printf("Digite o Nome do Livro: ");
        scanf(" %[^\n]", (livros+i)->Nome);
        printf("Digite o Nome do Altor: ");
        scanf(" %[^\n]", (livros+i)->Autor);
        printf("Digite o Genero do Livro: ");
        scanf(" %[^\n]", (livros+i)->Genero);
        printf("Digite a quantidade de Paginas: ");
        scanf(" %d", &(livros+i)->Paginas);
        (livros+i)->Lanca.dia = rand()%30+1;
        (livros+i)->Lanca.mes = rand()%12+1;
        (livros+i)->Lanca.ano = rand()%28+1998;
    }
return;
}

int main(){
srand(time((NULL)));
Livro *livros= (Livro *) malloc(MAX*sizeof(Livro));
if(livros==NULL){
    printf("Errp ao alocar memoria");
    return 1;
}
preencher(livros, MAX);
for(int i =0; i<MAX; i++){
        printf("------Livro %d------\n", i);
        printf(" Nome do Livro: %s \n", (livros+i)->Nome);
        printf("Nome do Altor: %s \n", (livros+i)->Autor);
        printf(" Genero do Livro: %s \n", (livros+i)->Genero);
        printf("Quantidade de Paginas: %d \n",  (livros+i)->Paginas);
        printf("Data de Lançamento: %d/%d/%d \n",  (livros+i)->Lanca.dia, (livros+i)->Lanca.mes, (livros+i)->Lanca.ano );
        
    }

free(livros);
return 0;
}