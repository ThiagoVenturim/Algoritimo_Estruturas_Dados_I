#include <stdio.h>
#define MAX 100
void imprimirMatriz(int *matriz, int linhas, int colunas){
for(int i=0; i<linhas; i++){
    for(int j=0; j<colunas; j++){
        printf(" %d ", *(matriz+i*colunas+j));
    }
    printf(" \n");
}
}
int main(){
int matriz[3][3];
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf(" Digite o  numero da linha %d da coluna %d", i , j);
        scanf(" %d", &matriz[i][j]);
    }
}
imprimirMatriz( matriz, 3, 3);
    return 0;
}