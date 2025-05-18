#include <stdio.h>
#define MAX 100
void inverter(int *vetor, int n) {
    int *inicio = vetor;
    int *fim = vetor + n - 1;
    int temp;

    while (inicio < fim) {
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;
        inicio++;
        fim--;
    }
}
int main(){
int vetor[MAX];
int n;
printf("Digite o tamanho");
scanf(" %d", &n);
for(int i= 0; i<n; i++){
scanf(" %d", &vetor[i]);
}
inverter(vetor, n);
for(int i= 0; i<n; i++){
printf(" %d", vetor[i]);
}
return 0;
}