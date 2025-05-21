#include <stdio.h>
#define tamanho 10
int main(){
int vetor[tamanho];
int soma=0;
for(int i=0; i<tamanho;i++){
    scanf(" %d", &vetor[i]);
}
for(int i=0; i<tamanho; i++){
soma+= vetor[i];
}
printf(" %d", soma);
    return 0;
}