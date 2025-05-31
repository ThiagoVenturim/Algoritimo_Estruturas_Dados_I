#include <stdio.h>
#include <stdlib.h>
int contar(int n){
if(n==0){
    return 0;
}else{
    return 1 + contar(n / 10);
  } 
}
int main() {
    int n;
    printf(" Digite um numero : ");
    scanf("%d", &n);
    printf("O numero tem %d Digitos \n", contar(n));
    return 0;
}   