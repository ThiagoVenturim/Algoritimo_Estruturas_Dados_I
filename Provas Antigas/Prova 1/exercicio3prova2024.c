#include <stdio.h>
float enesimo (int n, float x){
float resultado =0;
if(n%2==0){
resultado = -(x/(3*n));
}else{
    resultado = +(x/(3*n));
}
return resultado;
}
int main(){
int n;
float x;
printf("Digite o termo da sequencia e  o valor de x:");
scanf(" %d %f", &n, &x);
printf(" O n-esesimo dessa sequencia e: %f", enesimo(n, x));
return 0;
}