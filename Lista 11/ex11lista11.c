#include <stdio.h>
#define MAX 100
int contarOcorrencias(int vetor[], int tamanho, int x, int i){
if(tamanho==0){
    return 0;
}else{
    if(vetor[tamanho]==x){
        i++;
    }
return i + contarOcorrencias( vetor,  tamanho-1, x , 0);
}
}
    

int main(){
int vetor[MAX];
int x, tamanho;
printf("Digite o tamanho: ");
scanf(" %d", &tamanho);
printf("Preencha vetor: ");
for(int i=0; i<tamanho; i++){
    scanf(" %d", &vetor[i]);
}
printf("Digite um Numero: ");
scanf(" %d", &x);
printf(" %d ", contarOcorrencias( vetor,  tamanho,  x, 0));
return 0; 
}