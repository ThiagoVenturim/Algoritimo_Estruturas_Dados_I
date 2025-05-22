#include <stdio.h>
#include <stdlib.h>
#define MAX 15
void preencher(int *vetor, int tamanho){
for(int *p=vetor; p< vetor+tamanho; p++){
scanf(" %d", p);    
}
    return;
}
void MaiorMenor(int *vetor, int tamanho, int *maior, int *menor){
for(int i=0; i<tamanho; i++){
    if( *maior< *(vetor+i)){
        *maior = *(vetor+i);
    }else if(*menor > *(vetor+i)){
        *menor= *(vetor+i);
    }
}
return;
}


int main(){
int *vetor;
int maior, menor;
vetor =(int *) malloc( MAX* sizeof(int));
if(vetor==NULL){
    printf("Erro ao alocar memoria");
    return 0;
}
preencher(vetor, MAX);
for(int i=0; i<MAX;i++){
    printf(" %d ", *(vetor+i));
}
printf(" \n");
maior=  menor = *vetor;
MaiorMenor(vetor, MAX , &maior , &menor);
free(vetor);
printf(" Maior numero e %d menor numero e  %d", maior , menor);

return 0; 
}