

#include <stdio.h>
int main (){
int num, positivo=0, negativo=0; // varial num para numero que o usuario digitar positivo e negativo para armazenar a quantidade de vezes que o usuario digitol
do{
    printf("Digite um numero: ");  //mensagem para o usuario digitar um numero 
    scanf("%d", &num);   // armazenar o numero digitado na variavel num
if(num>0){
positivo ++;
}else if(num < 0){
negativo++;
}
}while(num!=0);
printf("Foram digitados %d numeros positvos e %d numeros negativos", positivo, negativo);
return 0;
}

