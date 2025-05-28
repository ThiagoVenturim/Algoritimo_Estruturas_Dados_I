#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int preecher(int *vetor, int tam){
   if(tam ==0){
    return 0;
   }else{
    *vetor= rand()%20+1;
    printf("%d ", *vetor);
    return preecher(vetor+1, tam-1);
}
}

int encontrar(int *vetor, int tam, int num, int *poss;){
if(tam == 0){
    return 0;
}else{
    if(*vetor == num){
        
        return 1 + encontrar(vetor+1, tam-1, num);
    }else{
        return encontrar(vetor+1, tam-1, num);
    }
}
}


int main(){
    int *vetor= (int*) malloc(TAM * sizeof(int));
    int num;
    srand(time(NULL));
    if (vetor == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    preecher(vetor, TAM);
    printf("Digite um numero: ");
    scanf("%d", &num);


    printf("%d\n", encontrar(vetor, TAM, num));
    free(vetor);

return 0;
}