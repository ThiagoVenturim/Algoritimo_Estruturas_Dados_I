


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 20
    int contPrimos(int *vetor, int tama){
    if(tama==0){
        return 0;
    }else{
        if(*vetor%3==0){
            return 1 + contPrimos(vetor +1,  tama -1);
    }
    return contPrimos(vetor +1,  tam -1);
}
}


int main(){
int j=0;
srand(time(NULL))
int *vetor= (int*)malloc(tam*sizeof(tam));
if(vetor==NULL){
    printf("Erro ao alocar memoria: ");
    return 1;
}
for(int i=0; i<tam; i++){
    *(vetor + i) = rand()%100+1;
} 
cont = contPrimos(vetor, tam);
int *primos = (int *)malloc(cont*sizeof(int));

for(int i=0; i<tam; i++){
    if(*vetor%3==0){
    *(primos+j) = *(vetor + i);
    }
} 







return 0;
}