#include <stdio.h>
int main (){
int a, b;
printf("Escreva um numero inteiro");
scanf("%d", &a);
if(100 <= a >= 200){
    
printf("o numero pertence ao intervalo de 100 a 200");
}else{
    printf("o numero nao pertence ao intervalo de 100 a 200");
}
return 0 ;
}