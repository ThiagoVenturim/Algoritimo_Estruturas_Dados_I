/* Crie uma struct chamada Livro com os seguintes campos: titulo (string até 100 caracte-
res), autor (string até 50 caracteres) e anoPublicacao (inteiro). No programa principal,
crie uma variável do tipo Livro, leia os dados de um livros, armazene na variável e depois
exiba essas informações*/


#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char titulo[100];
    char autor[50];
    int anoPublicado;

}Livro;

void exibir(Livro *livros, int tam){
    for(int i=0; i<tam; i++){
        printf(" Titulo %s ", (livros+i)->titulo);
        printf(" Autor %s ", (livros+i)->autor );
        printf(" Ano de Publicacao %d ", (livros+i)->anoPublicado);
    }
return; 
}


int main(){
    int tam;

    printf("Digite quantos livros vai digitar: ");
    scanf("%d", &tam);

    Livro *livros= (Livro*)malloc(tam*sizeof(Livro));

    if(livros == NULL){
        printf(" Erro ao alocar");
        return 1;
    }
    for(int i=0; i<tam; i++){
        fflush(stdin);
        printf(" Digite o Nome dolivro ");
        fgets((livros+i)->titulo, 100, stdin);
        printf(" Digite do autor do livros ");
        fgets((livros+i)->autor, 50, stdin);    
        printf(" Digite o ano de publicacao");
        scanf(" %d", &(livros+i)->anoPublicado);
        fflush(stdin);
    }
    
exibir(livros, tam);
free(livros);
return 0;
}