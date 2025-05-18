#include <stdio.h>
int main(){
int coluna, linha, soma=0;
printf("Digite o nmero de linhas e colunas da matriz: ");
scanf("%d %d", &linha, &coluna);
int matrix[linha][coluna];
int inverso[coluna][linha];
for(int i=0; i<linha; i++){
    printf("Digite os elementos da linha %d: ", i);
    for(int j=0; j<coluna; j++){        
        scanf("%d", &matrix[i][j]);
        soma+= matrix[i][j];
    }
}
printf("Matrix Inversa \n");
for(int i=0; i<coluna; i++){
    for(int j=0; j<linha; j++){
        inverso[i][j] = matrix[j][i];
        printf("%d ", inverso[i][j]);
        
    }
    printf("\n");
}
printf(" A soma de todos os elementos e %d", soma);
    return 0;
}