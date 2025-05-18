#include <stdio.h>

int main (){
int vetor[10], vetor2[10], saida[10], cont=0;
printf("Digite 10 numeros inteiros:\n");
for(int i=0; i<10; i++){
    scanf(" %d  ", &vetor[i]);
}
printf("Digite 10 numeros inteiros:\n");
for(int i=0; i<10; i++){
    scanf(" %d  ", &vetor2[i]);
}
for(int i=0; i<10; i++){
    for(int test=0; test<10; test++){
        if(vetor[i] == vetor2[test]){
            saida[cont] = vetor[i];
          cont++;
        break;
        }
    }
}   
for(int i= 0; i<cont ; i++){
printf("%d ", saida[i]);
}
return 0;
}