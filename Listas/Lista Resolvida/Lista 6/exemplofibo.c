#include <stdio.h>

int sequencia(int n){
if(n==2 || n==1){
 return 1;
}else
    return sequencia(n-1) + sequencia(n-2);
 
}
int main(){
int n;
printf("Digite um numero: ");
scanf("%d", &n);
printf("O termo %d da sequencia de Fibonacci eh: %d\n", n, sequencia(n));
return 0;
}