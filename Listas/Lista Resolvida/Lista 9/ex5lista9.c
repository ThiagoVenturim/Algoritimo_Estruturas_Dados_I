#include <stdio.h>
void preencheValores(int *vetorX, int tamanho){
for(int i=0; i<tamanho; i++ ){  
    scanf(" %d", &vetorX[i]);
}
    return; 
}

int copiaNegativos(int *vetorX, int tamanho, int *vetorneg){
int quant=0;
    for(int i =0; i<tamanho; i++){
    if(vetorX[i]<0){
    vetorneg[quant]=vetorX[i];
    quant++;
    }
}  
return quant+1;
}
int main(){
int vetorX[10];
int vetorneg[10];
int tamanho;
preencheValores(vetorX, 10);
tamanho = copiaNegativos(vetorX, 10, vetorneg);
for(int i=0; i<tamanho; i++){
    if(i==tamanho-1){
    vetorneg[i]=0;
}
printf(" %d ", vetorneg[i]);

}
return 0;
} 