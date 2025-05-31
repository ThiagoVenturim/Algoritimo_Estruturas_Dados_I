#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 4

int somarElementos(int *matrix){
int soma=0;
for(int i= 0; i< MAX; i++){
    for(int j=0; j<MAX; j++){
       soma += *( matrix+i*MAX+j);
    }

}



return soma;
}

int main(){
int *matrix= (int *) malloc(MAX * MAX * sizeof(int));
srand(time(NULL));
if(matrix == NULL){
    printf("Memory allocation failed\n");
    return 1;
}
for(int i= 0; i< MAX; i++){
    for(int j=0; j<MAX; j++){
        *matrix = rand() % 100+1;
        printf("%d ", *( matrix+i*MAX+j));
    }
    printf("\n");
}
printf("Soma dos elementos da diagonal principal: %d\n", somarElementos(matrix));
free(matrix);

return 0;
}
