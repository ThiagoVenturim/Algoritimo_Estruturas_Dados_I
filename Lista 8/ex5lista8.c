#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int numalatorio[10], vetorpar[10];
int tamanho =0;
srand(time(NULL));
for(int i=0; i<10;  i++){
    numalatorio[i]=rand()%16+5;
        if(numalatorio[i]%2==0){
            vetorpar[tamanho]=numalatorio[i];
            tamanho++;
    }
}
for(int i=0; i<10; i++){
        printf(" %d ", numalatorio[i]);
}
printf("\n ");
for(int i= 0; i<tamanho; i++){
        printf(" %d ", vetorpar[i]);
}

return 0; 
}