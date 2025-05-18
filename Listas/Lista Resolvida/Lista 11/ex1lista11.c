#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 500
void preencheVetor(int *vetor, int tamanho){   
srand(time(NULL));  
for(;  vetor < vetor+tamanho; vetor++){
*vetor = rand()%60+1;
 printf(" %d", *vetor);
}
return;
}

int main(){  
int vetor [MAX];
preencheVetor( vetor, MAX );


    return 0;
}