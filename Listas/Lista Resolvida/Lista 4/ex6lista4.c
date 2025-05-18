#include <stdio.h>
int main(){
int cont=0, num, cp=0;
do{
printf("Digite um numero: ");
scanf("%d", &num);
if(num%2==0){
    cp++;
}
cont++;
}while(num!=0);

printf("Foram digitados %d numeros, %d eram pares\n", cont, cp);

    return 0;
}