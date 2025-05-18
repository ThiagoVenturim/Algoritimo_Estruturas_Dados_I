#include <stdio.h>
int exer4(int num){
int resultado=0, soma= 0;
for(int i= num; i>0; i--){
resultado= num % 10;
num/=10;
soma+=resultado;
}

    return soma;
}

int main(){ 
int n;
printf("Digite um numero inteiro positivo: ");
scanf (" %d", &n);
printf(" %d", exer4(n) );
return 0;
}