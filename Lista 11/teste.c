#include <stdio.h>
#include <stdlib.h>
int main(){
int *ptr;
int tamanho;
ptr= (int *) malloc (tamanho * sizeof(int));
scanf(" %d", &tamanho);
for(int i=0; i<tamanho; i++){
    scanf(" %d", &(*(ptr+i)));
}
for(int i =0; i<tamanho; i++){
    printf(" %d", *(ptr+i));
}
return 0;
}