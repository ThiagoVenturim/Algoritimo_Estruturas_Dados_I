#include <stdio.h>
#include <math.h>

int resto (int n){
  int resultado =0, soma =0 ;
  
  for(int i = n; i>0; i-- ){
  resultado = n % 10;
if(resultado%2!=0){
    soma += resultado;
}
n /= 10;
  }
  return  soma= pow(soma,2);
}
int main(){ 
int n;
printf("Digite um numero inteiro positivo: ");
scanf (" %d", &n);
printf(" %d", resto(n) );
return 0;
}