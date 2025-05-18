#include <stdio.h>

int main (){
int vetor[10];
printf("Digite 10 numeros inteiros:\n");
for(int i=0; i<10; i++){
    scanf("%d", &vetor[i]);
}
for(int i=0; i<10; i++){
   printf("O numero %d na posicao %d\n", vetor[i], i);
}
return 0;
}