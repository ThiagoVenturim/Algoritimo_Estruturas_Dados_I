#include <stdio.h>
#define MAX 100
int somaIterativaP(int *vetor, int *tamanho){
int soma= 0;
int *p;
for(p= vetor; p<vetor+(*tamanho); p++){
    soma += (*vetor);
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
printf(" a Soma e %d", somaIterativaP(vetor, &tamanho));

    return 0;
}