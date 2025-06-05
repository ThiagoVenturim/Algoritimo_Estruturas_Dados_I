#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int verificar(int *vetor, int tamanho, int atual){
if(tamanho == 0){
    return 0; 
} else{
    if(*vetor==atual){
           
        return 1 ; 

    } 
 return verificar(vetor-1, tamanho-1, atual);
}
}
int main(){
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int *vetor = (int *)malloc(tamanho * sizeof(int));
    
    if(vetor == NULL){
        printf("Memória insuficiente!\n");
        return 1;
    }
    srand(time(NULL));
    *vetor= rand() % 100+1;
    for(int i = 1; i < tamanho; i++){
        do{
        *(vetor+i) = rand() % 60 + 1;
        }while(verificar((vetor+i-1), i, *(vetor+i)) == 1);
    }

    for(int i = 0; i < tamanho; i++){
        printf("%d ", *(vetor+i));
    }
    free(vetor);
    return 0;
}