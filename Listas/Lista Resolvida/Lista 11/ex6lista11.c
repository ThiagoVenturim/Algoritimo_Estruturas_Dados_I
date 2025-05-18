#include <stdio.h>
#define MAX 100 
int maiorIterativaI(int vetor[], int tamanho){
int j=0;
for( int i =1; i<tamanho; i++){
    if(vetor[j] < vetor[i]){
     j=i;
    }
}
return j; 
}
int main(){
int vetor[MAX];
int tamanho; 
printf(" Digite o tamanho do vetor");
scanf(" %d", &tamanho);
for(int i= 0; i<tamanho; i++){
scanf(" %d", &vetor[i]);    
}
printf(" O maior numero e %d na posicao %d", vetor[maiorIterativaI( vetor, tamanho)], maiorIterativaI( vetor, tamanho));

    return 0;
}