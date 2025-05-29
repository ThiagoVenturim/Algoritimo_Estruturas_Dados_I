/*(Matriz – alocação linearizada) Implemente um programa em C que aloque dinamicamente uma matriz quadrada de inteiros de tamanho 3 × 3. O programa deve preencher
a matriz com valores aleatórios entre 1 e 50 e exibir a matriz.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#define TAM 3
void preenche(int *matriz, int tam, int i){
if(tam == 0){
    return;
}else{
    *matriz = rand() % 50 + 1;
    preenche(matriz + 1, tam - 1, i);
}
}


int main(){
int *matriz= (int*)malloc(pow(TAM ,2) *sizeof(int));    
srand(time(NULL));
if (matriz == NULL) {
    printf("Erro ao alocar memória.\n");
    return 1;
}    
preenche(matriz, pow(TAM, 2 ), 0);
for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
        printf("%d ", *(matriz + i * TAM + j));
    }
    printf("\n");
}

free(matriz);

return 0;
}