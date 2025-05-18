#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void preencher(int *vetor, int tamanho){
int *p;
    for(p=vetor; p<vetor+tamanho; p++){
       * p =  rand()%10+1;
      
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
for(int i =0; i<num ; i++, ptr++){
    printf(" %d", *(ptr+i));
}
free(ptr);
}
    

    return 0; 
}