#include <stdio.h>

int main (){
int privetor[5], segvetor[5], vetorsoma[5];
printf("Digite 5 numeros inteiros para o primeiro vetor:\n");
for(int i=0; i<5; i++){
    scanf("%d", &privetor[i]);
}
printf("Digite 5 numeros inteiros para o segundo vetor:\n");
for(int i=0; i<5; i++){
    scanf("%d", &segvetor[i]);
}
for(int i=0; i<5; i++){
    printf("  %d ", vetorsoma[i] = privetor[i] + segvetor[i]);
}   
return 0;
}
