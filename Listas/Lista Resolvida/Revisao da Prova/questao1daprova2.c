#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tamanho 6
int verificar(int *vetor, int atual){
if (vetor= &atual){
    return 0; 
} else{
    if(*vetor==atual){
        return 1 ; 

    } 
 return verificar(vetor+1, atual);
}
}
int main(){
    int *vetor = (int *)malloc(tamanho * sizeof(int));
    
    if(vetor == NULL){
        printf("Memória insuficiente!\n");
        return 1;
    }
    srand(time(NULL));
    for(int i =0 ; i < tamanho; i++){
        do{
        *(vetor+i) = rand() % 60 + 1;
        }while(verificar((vetor), *(vetor+i)) == 1);
    }

    for(int i = 0; i < tamanho; i++){
        printf("%d ", *(vetor+i));
    }
    free(vetor);
    return 0;
}