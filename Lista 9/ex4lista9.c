#include <stdio.h>
void menosAB(int *A, int *B, int *C, int tamanho){
for(int i=0; i<tamanho; i++ ){
    C[i]=A[i]-B[i];
}
    return; 
}

int main(){
int A[10];
int B[10];
int C[10];
printf("Digite o primiro vetor: ");
for(int i=0; i<10 ; i++){
scanf(" %d ", &A[i]);

}
printf("Digite o segundo vetor: ");
for(int i=0; i<10; i++){
    scanf(" %d ", &B[i]);
}
menosAB(A, B, C, 10);
for(int i=0; i<10; i++){
    printf(" %d ", C[i]);
}

    return 0;
}