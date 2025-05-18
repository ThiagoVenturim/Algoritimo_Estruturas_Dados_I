#include <stdio.h>
#define MAX 100
int somaIterativaI(int vetor[], int tamanho){
int soma= 0;
for(int i=0; i<tamanho; i++){
    soma += vetor[i];
}
    return soma;
}
int main(){
int vetor[MAX];
int tamanho;
printf("Digite o tamanho do vetor: ");
scanf(" %d", &tamanho);
for(int i=0; i<tamanho; i++ ){
    scanf(" %d", &vetor[i]);
}
printf(" a Soma e %d", somaIterativaI(vetor, tamanho));

    return 0;
}