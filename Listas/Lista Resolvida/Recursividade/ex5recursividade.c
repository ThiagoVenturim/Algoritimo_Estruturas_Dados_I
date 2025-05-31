#include <stdio.h>
int somar(int num){
if(num==0){
    return 0;
}else{
    return num%10  + somar(num/10);
}
}
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("A soma dos digitos e: %d\n", somar(num));
    return 0;
}