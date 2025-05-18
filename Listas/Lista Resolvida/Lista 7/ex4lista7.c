#include <stdio.h>

void pares (int num, int *par){
 if(num % 2 == 0){
    *par = 1;
}else{
    *par = 0;
}
return;
}

int main(){
    int num, par, total = 0;
do{
printf("Digite um numero: ");
scanf("%d", &num);
if(num != 0){
    pares ( num,  &par);
    total+=par; 
}
}while(num!=0);

printf("O total de numeros pares e  %d ", total);
    return 0;
}