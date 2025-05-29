/*. (Vetor – inversão com ponteiros) Implemente uma função em C que receba um vetor
de inteiros e seu tamanho e inverta os elementos do vetor no próprio espaço de memória.
A função deve utilizar apenas ponteiros e não deve utilizar vetor auxiliar
*/

#include <stdio.h>
#include <stdlib.h>
void inverter(int *vetor, int tamanho, int parada) {
if(tamanho <= parada){
    return; 
}else{
    int c; 
    c = *(vetor+tamanho);
    *(vetor+tamanho) = *(vetor+parada);
    *(vetor+parada) = c;
    return inverter(vetor, tamanho-1, parada+1);
}
}




int main(){
    int *vetor, tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    vetor = (int *) malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    for(int i = 0; i < tamanho; i++) {
        scanf("%d", vetor+i);
    }
    inverter(vetor, tamanho-1, 0);
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", *(vetor+i));
    }
    free(vetor);

return 0;
}