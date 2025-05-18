#include <stdio.h>
void pre(int *vetor, int tamanho){
for(int i=0; i<tamanho; i++){
    scanf("%d", &vetor[i]);
}
return;
}

int mens(int *vetor, int tamanho){
int menor=vetor[0];
int poss;
for(int i=1; i<tamanho; i++){
    if(vetor[i]<menor){
        menor=vetor[i];
        poss=i;
    }
}
return poss;

}
void troca(int *vetor, int tamanho, int  poss){
int oper;
if(poss==0){
printf("Possicão do menor numero e 0 troca não pode ser realizada ");
}else{
oper=vetor[0];
vetor[0]= vetor[poss];
vetor[poss]= oper;
}
for(int i=0; i<tamanho; i++ ){
    printf("%d ", vetor[i]);
}

return;
}


int main(){
int vetor[5];
printf("Digite 5 numeros inteiros:\n");
pre(vetor, 5);
int poss = mens(vetor,  5);
troca(vetor, 5, poss);

    return 0;
}