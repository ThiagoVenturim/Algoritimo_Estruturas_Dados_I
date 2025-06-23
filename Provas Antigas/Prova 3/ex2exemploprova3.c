#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct{
    char nome[50];
    char autor[25];
    int anoPubli;
}Livro;         

void MaiorMenor(Livro *livros, int tam, int *maior, int *menor){
    for(int i=0; i<tam; i++){
        if( (livros+i)->anoPubli < (livros+ *menor)->anoPubli){
            *menor=i;
        }else if( (livros+i)->anoPubli > (livros+ *maior)->anoPubli ){
            *maior= i;
        }
    }
return;
}


int main(){
    int maior=0, menor=0;
    Livro *livros = (Livro *)malloc(MAX*sizeof(Livro));
    if(livros==NULL){
        printf("Erro ao alocar");
        return 0;
   }
   for(int i=0 ; i<MAX; i++){
        fflush(stdin);
        printf(" Digite o Nome do livro o Altor e o Ano de Publicacao do livro %d: ", i);
        scanf(" %[^\n] %[^\n] %d", livros[i].nome, livros[i].autor, &livros[i].anoPubli);
   }
   MaiorMenor( livros,  MAX,  &maior,  &menor);
   printf("O Livro mais recente e %s de %d \n",  livros[maior].nome, livros[maior].anoPubli);
   printf("O Livro mais antigo e %s de %d",  livros[menor].nome, livros[menor].anoPubli);
   free(livros);
return 0;
}