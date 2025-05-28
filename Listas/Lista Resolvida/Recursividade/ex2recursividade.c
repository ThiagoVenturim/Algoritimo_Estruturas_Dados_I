#include <stdio.h>
#include <stdlib.h>

int preencherVetor(int *vetor, int tamanho, int i){
if( tamanho == 0){
    return 0;
}else{
    *vetor= i;
    return preencherVetor(vetor + 1, tamanho - 1, i + 1);
}
}


int soma(int *vetor, int tamanho , int som){
    if(tamanho==1){
        return som;
    }else{
        som += *vetor;
        return soma(vetor + 1, tamanho - 1, som);
    }
}



int main(){
    int *vetor, A, B, tamanho;
    printf("Digite o intervalo do vetor A e B: ");
    scanf("%d %d", &A, &B);
    if(A > B){
        printf("Intervalo invalido!\n");
        return 1;   
    }
    tamanho = B - A + 1;
    vetor = (int *)malloc(tamanho * sizeof(int));
    if(vetor == NULL){
        printf("Memoria insuficiente!\n");
        return 1;
    }
    
    preencherVetor(vetor, tamanho, A);
    printf("Vetor preenchido:\n");
    printf("A soma dos numeros do intervalo e %d ", soma(vetor, tamanho, 0));

return 0;
}