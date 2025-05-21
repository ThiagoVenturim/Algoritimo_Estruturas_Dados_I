#include <stdio.h>
int somatorio(int n){
    if(n>0){
return n + somatorio(n-1);
    }
return;
}

int main(){
int n, resultado;
printf("Digite um numero inteiro: ");
scanf("%d", &n);
resultado= somatorio(n);
printf("O somatorio de %d", resultado);
return 0;
}
