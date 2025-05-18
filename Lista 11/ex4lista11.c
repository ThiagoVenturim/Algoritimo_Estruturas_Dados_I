#include <stdio.h>
#define MAX 100
int somaRecursivaI(int vetor[], int tamanho){
if(tamanho < 0){
    return 0;
}else{
return vetor[tamanho]+somaRecursivaI( vetor, tamanho-1);
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
printf(" %d", somaRecursivaI(vetor, tamanho));

    return 0;
}