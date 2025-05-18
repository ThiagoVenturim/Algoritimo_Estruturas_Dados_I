

#include <stdio.h>
#define MAX 100
int somaRecursivaP(int *vetor, int tamanho){
if(tamanho < 0){
    return 0;
}else{
return *vetor+somaRecursivaP( vetor+1, tamanho-1);
}
}
int main(){
int vetor[MAX];
int tamanho;
printf("Digite o tamanho do vetor");
scanf(" %d", &tamanho);
for(int i=0; i<tamanho; i++){
    scanf(" %d", &vetor[i]);
}
printf(" %d", somaRecursivaP(vetor, tamanho));

    return 0;
}