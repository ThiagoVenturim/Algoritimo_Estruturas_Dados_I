#include <stdio.h>
int main (){
int a;
printf("Escreva um numero inteiro");
scanf("%d", &a);
if (a%7==0){
printf("O numero %d e divisivel por 7", a);
}else{
    printf("O numero %d nao e divisivel por 7", a);
}
return 0;
}

