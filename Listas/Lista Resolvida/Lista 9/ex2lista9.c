#include <stdio.h>
void pren(int *vetor, int tam){
int num =1;
for(int i=0; i<tam; num++){
    if(num%6!=0 && num%10!=6){
        vetor[i]=num;
        i++;
        
    }
}
    return; 
}

int main(){
int vetor[100];
pren(vetor, 100);
    for(int i=0; i<100; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}
