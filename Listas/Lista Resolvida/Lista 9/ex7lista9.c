#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void preencheMatriz(int matriz[][MAX], int n){
    for(int i=0; i<n ;i++){
        for(int j=0; j<n ;j++){
            matriz[i][j]=rand()%100+1;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    } 
}

void somaDiagonalPrincipal(int matriz[][MAX], int n){
    int  soma=0;
  for(int i=0; i<n; i++){
        soma+=matriz[i][i];
  }
printf(" Soma Diagonal Principal e %d", soma);
}

void somaAbaixoDiagonal(int matriz[][MAX], int n){
    int soma=0;
    for(int i=1; i<n; i++){
      while(1){
        
          soma+=matriz[i][i-1];
          break;
      }
    }
  printf(" Soma Abaixo Diagonal e %d", soma);
}
int main (){
int n;
printf("Digite um numero ");
scanf(" %d", &n);
int matriz[n][n];
srand(time(NULL));
preencheMatriz( matriz, n);
somaDiagonalPrincipal( matriz, n);
somaAbaixoDiagonal(matriz, n);
    return 0;
}