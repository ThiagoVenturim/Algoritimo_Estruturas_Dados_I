#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void bucar(int vetor[], int tam, int num){
for(int i=0; i<tam; i++){
    if(vetor[i] == num){
        printf("O numero foi encontrado na posicao %d\n", i);
    }
}
    return; 
}
int main(){
int num;
int vetor[20];
int tama= 20;
srand(time(NULL));
for(int i=0; i<20; i++){
    vetor[i] = rand()%100+1;
    printf("%d ", vetor[i]);
}
printf("Digite um numero: ");
scanf("%d", &num);
bucar(vetor, tama, num);
    return 0;
}