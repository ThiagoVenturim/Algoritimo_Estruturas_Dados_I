#include <stdio.h>
int main (){
int vetor[15], soma=0; 
for(int i=0; i<15; i++){
scanf("%d", &vetor[i]);

if(vetor[i]%2!=0){
soma+=vetor[i];
}

} 
printf("Soma: %d\n", soma);
return 0;
}