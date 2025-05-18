#include <stdio.h>
#define MAX 100 
int maiorValor( int *vetor, int tamanho){
int maior= *vetor;
int *p;
for( p=vetor; p<vetor+tamanho; p++ ){
if( maior < *p)
maior = *p;
}
return maior;
}
int main(){
int vetor[MAX];
int tamanho;
printf( "Digite o tamanho do vetor");
scanf(" %d", &tamanho);
printf(" Prencher vetor");
for(int i =0; i<tamanho; i++){
    scanf(" %d", &vetor[i]);
}
for(int i= 0; i<tamanho; i++){
 if(maiorValor(vetor, tamanho)==vetor[i]){
    printf( " O maior valor e %d na pos %d", vetor[i], i);
    break;
    }
}
return 0;
}