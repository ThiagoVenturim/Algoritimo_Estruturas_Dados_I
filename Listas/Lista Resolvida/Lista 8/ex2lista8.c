#include <stdio.h>

int main (){
double vetor[10], maior=0;
int maiori;

printf("Digite 10 numeros inteiros:\n");

for(int i=0; i<10; i++){
    scanf(" %lf ", &vetor[i]);
    if(vetor[i] > maior){
     maior = vetor[i];
        maiori = i;
    }
}
        printf("O maior numero e: %2.f na posicao %d", maior, maiori);
return 0;
}