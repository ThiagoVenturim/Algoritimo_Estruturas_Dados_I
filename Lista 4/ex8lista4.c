#include <stdio.h>
int main () {
float num;
int pos=0 , neg =0, soma= 0;
do{
    printf("digite um numero:");
    scanf("%f", &num);
    if(num<0){
        neg++;
}else{
        pos++;
 }
}while(num != 0);
printf("Programa finalizado ");
soma = neg + pos;
printf("Foram digitados %d numeros sendo %.2f porcento positvos e %.2f porcento negativos!", soma-1, (float)pos/soma*100, (float)neg/soma*100);



    return 0; 
}