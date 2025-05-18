#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int soma_elementos(int *vetor, int tamanho){
int soma=0;
int *p;
    for(p =vetor; p < vetor + tamanho; p++){
        soma += *p;
    }      
return soma;
}

void preencher(int *vetor, int tamanho){
int *p;
    for(p=vetor; p<vetor+tamanho; p++){
       * p =  rand()%10+1;
       printf (" %d", *p);
    }
return;
}

int main(){
int num;
int *ptr;
srand(time(NULL));
scanf(" %d", &num);
ptr= (int *) malloc(num* sizeof(int));
if(ptr != 0){
preencher(ptr, num);
printf(" %d", soma_elementos(ptr, num));
free(ptr);
}
    return 0; 
}