#include <stdio.h>
int main (){
int num;
printf("Digite um numero inteiro positivo maior que 1: ");
scanf(" %d", &num);
for(int i=1; i<num; i+=2){
if(i%3==0 || i%5==0){
    printf(" %d ", i);
}
}
    return 0;
}