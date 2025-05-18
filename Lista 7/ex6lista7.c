#include <stdio.h>
float soma(int num){
    float soma=0;
for(int i=1; i<=num; i++){
    soma+=(1.0/i);
}
return soma;
}
int main(){
int num;
printf("Digite um numero: ");
scanf("%d", &num);
printf("A soma e %.2f\n", soma(num));
    return 0;
}