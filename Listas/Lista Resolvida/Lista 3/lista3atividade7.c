#include <stdio.h>
#include <math.h>
int main (){
int a;
printf("Escreva um numero inteiro: ");
scanf("%d", &a);
if (a%2==0){
printf("O numero %d e par", a);
}
else{
    printf("O numero %d e impar", a);
}
return 0;
}