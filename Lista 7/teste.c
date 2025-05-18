#include <stdio.h>

int divisor(int num){
int div=1;
for(int i=1; i<=num/2; i++){
	if(num%i==0){
	div++;
	}
}
return div;
}
int main(){
int num;
printf("Digite um numero inteiro positivo");
scanf(" %d", &num);
printf("A quatidade de divisores do numero e %d", divisor(num));

return 0;
}