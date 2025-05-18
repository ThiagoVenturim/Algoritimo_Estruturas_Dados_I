#include <stdio.h>




int main (){
int vetor[5], ver[5], cont=1;
printf("Digite 5 numeros inteiros:\n");

for(int i = 0; i < 5; i++){
    scanf("%d", &vetor[i]);
}
for(int i = 0; i < 5; i++){
        for(int tent=i+1; tent<5; tent++){
            if(vetor[i] == vetor[tent]){
                cont++;
            }
        }
 if(cont > 1){
 printf("O numero %d se repete %d vezes\n", vetor[i], cont);
    }
    cont = 0;
}


    return 0;
}