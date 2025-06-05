/*crie uma struct chamada Acao para controlar ações de uma bolsa de valores com as
seguintes informações:
nomeCompanhia — Nome da companhia (string de até 50 caracteres)
 areaAtuacao — Área de atuação da companhia (string de até 30 caracteres)
 valorAtual — Valor atual da ação (em reais, do tipo float)
 valorAnterior — Valor da ação na abertura da bolsa (em reais, do tipo float)
 variacaoPorcentagem — Variação da ação em porcentagem (do tipo double)
No programa principal, leia os dados da ação (exceto a variação), calcule a variação
percentual usando a fórmula: */



#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nomeCompanhia [50];
    char areaAtuacao [30];
    float valorAtual ;
    float valorAnterior; 
    double variacaoPorcentagem ;

}Acao;

void mostrar(Acao *p1, int tam){
    for(int i=0; i<tam; i++){
        printf(" O nome da Companhia: %s ",(p1+i)->nomeCompanhia);
        printf(" A area atuacao: %s", (p1+i)->areaAtuacao );
        printf(" O valor atual: %.2f ", (p1+i)->valorAtual);
        printf(" o valor anterio: %.2f ", (p1+i)->valorAnterior);
        printf(" A taxa de variacao : %.2lf ", (p1+i)->variacaoPorcentagem);
    }
return;
}

int main(){
    int tam;
    printf("Digite quantas empresas: ");
    scanf(" %d ", &tam);
    Acao *p1= (Acao*)malloc(tam*sizeof(Acao));
    if(p1==NULL){
        printf("Erro ao alocar");
        return 1;
    }
    for(int i=0; i<tam; i++){
        printf(" Digite o nome da Companhia: ");
            fflush(stdin);
            fgets((p1+i)->nomeCompanhia, 50, stdin);
        printf(" Digite a area de atuacao: ");
            fflush(stdin);
            fgets((p1+i)->areaAtuacao, 30, stdin);
        printf(" Digite o valor atual: ");
            scanf(" %f", &(p1+i)->valorAtual);
        printf(" Digite o valor anterio: ");
            scanf(" %f", &(p1+i)->valorAnterior);
    (p1+i)->variacaoPorcentagem= (((p1+i)->valorAtual- (p1+i)->valorAnterior)/(p1+i)->valorAnterior)*100;
        }
mostrar(p1, tam);
free(p1);
return 0;
}
