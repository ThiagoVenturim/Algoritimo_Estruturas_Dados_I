#include <stdio.h>
void calculaOperacoes(int a, int b, int *soma, int *produto){
*soma= a+b;
*produto= a*b;
return ;
}
int main(){
int soma, produto, num1, num2;
printf("Dgite dois numeros ");
scanf(" %d %d", &num1, &num2);
calculaOperacoes(num1, num2, &soma, &produto);
printf("O resultado do produto e da soma sao %d %d", produto, soma);
return 0;

}