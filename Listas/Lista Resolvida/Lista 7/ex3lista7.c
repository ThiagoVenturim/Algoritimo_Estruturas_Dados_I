#include <stdio.h>

int divisor(int num){
int soma=0;
for(int i=1; i<=num/2; i++){
if(num%i==0){
soma+=i;
printf(" %d\n", i); // Exibe o divisor encontrado
}
}
return soma;
}

int  main(){
int num;
printf("Digite um numero: ");
scanf("%d", &num);
printf("A soma dos divisores do numero e %d\n", divisor(num));
}