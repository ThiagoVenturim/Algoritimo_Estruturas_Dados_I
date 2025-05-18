#include <stdio.h>
int main (){
int num;
int fatorial= 1, i =1 ;
printf("Digite um numero:");
scanf(" %d", &num);
if (num < 0) {
    printf("Nao existe fatorial de numero negativo.\n");
}else{
do{     
    fatorial *= i;
    i++;
}while(i<=num);
printf("Fatorial de %d = %d\n", num, fatorial);
}
    return 0;
}