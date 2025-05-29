/*7. (Matriz – média abaixo da diagonal) Escreva uma função em C que receba uma
matriz quadrada de inteiros alocada de forma linearizada e seu tamanho. A função deve
calcular e retornar a média dos elementos abaixo da diagonal principal.
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void preenche(int *matriz, int tam){
    if(tam == 0){
        return;
    }else{
        scanf(" %d", matriz);
        preenche(matriz + 1, tam - 1);
    }
}

float somar (int *matriz, int tam){
    int soma = 0;
    int cont=0;
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(i > j){
                soma += *(matriz + i * tam + j);
                cont++;
            }
        }
    }
    printf("Soma: %d\n", soma);
    printf("Contagem: %d\n", cont);
    return (float)soma/cont;
}

int main(){
    int tamanho;
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &tamanho);
    if (tamanho <= 0) {
        printf("Tamanho inválido.\n");
        return 1;
    }
    int *matriz= (int*)malloc(pow(tamanho, 2) *sizeof(int));    

    if (matriz == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }    
    preenche(matriz, pow(tamanho, 2 ));
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            printf("%d ", *(matriz + i * tamanho + j));
        }
        printf("\n");
    }
    printf("A media dos elementos abaixo da diagonal principal e: %.2f\n", somar(matriz, tamanho));
    free(matriz);

return 0;
}