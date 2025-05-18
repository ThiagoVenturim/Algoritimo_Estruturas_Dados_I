#include <stdio.h>
 
int fun(int num){
int resultado, soma=0;
for(int i= 0; i<=num; i++){
resultado = num % 10;
if(resultado%2!=0){
soma+=resultado;
}
num/=10;
}
return soma;
}
int main() {
    int numero;
    
    // Entrada do número
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    // Chama a função e exibe o resultado
    int resultado = fun(numero);
    printf("A soma dos dígitos ímpares é: %d\n", resultado);
    
    return 0;
}