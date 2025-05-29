/*(Vetor – alocação dinâmica e soma recursiva) Implemente um programa em C que
leia um vetor de inteiros de tamanho n (definido pelo usuário). O programa deve:
a) Utilizar alocação dinâmica para armazenar os elementos.
b) Implementar uma função recursiva que c
*/


#include <stdio.h>
#include <stdlib.h>

int somaElementos(int *vetor, int tam){
if( tam == 0){
    return 0;
}else{
    return *(vetor) + somaElementos(vetor+1, tam-1);
}      
}


int main(){
int *vetor, tam;
printf("Digite o tamanho do vetor: ");
scanf("%d", &tam);
vetor = (int *)malloc(tam * sizeof(int));
if (vetor == NULL) {
    printf("Memória insuficiente!\n");
    return 1;
}
for (int i = 0; i < tam; i++) {
    scanf("%d", vetor+i);
}
printf("A soma dos elementos do vetor e: %d\n", somaElementos(vetor, tam));
free(vetor);

return 0;    
}