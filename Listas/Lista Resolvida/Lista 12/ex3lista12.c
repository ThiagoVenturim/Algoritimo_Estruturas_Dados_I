#include <stdio.h>
#include <stdlib.h>

void preencher(int *vetor, int tamanho){
int *p;
    for(p=vetor; p<vetor+tamanho; p++){
       scanf(" %d", &(*p));  
    }
return; 
}

int main(){
int num;
int *ptr;

scanf(" %d", &num);
ptr= (int *) malloc(num* sizeof(int));
if(ptr != 0){
preencher(ptr, num);
for(int i =0; i<num ; i++){
    printf(" %d", *(ptr+i));
}
free(ptr);
}
    return 0; 
}