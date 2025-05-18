#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contem( int *vetor, int tamanho, int num){
    for(int i=0; i<tamanho; i++){
        if(vetor[i] == num){
            return 1; 
        }
    }
    return 0; 
}

int main(){
int vetor[6], num_al;
srand(time(NULL));
for(int i=0; i<6; i++){
for(int i=0; i<6; i++){ 
do{
    num_al= rand()%60+1;
}while( contem( vetor, i, num_al));
vetor[i]=num_al; 
}
printf("%d ", vetor[i]);
}

    return 0;
}