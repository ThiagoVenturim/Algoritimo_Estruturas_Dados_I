#include <stdio.h>
#include <math.h>
int main () {
float a, b;
char car;
printf("Escreva dois numeros e uma opcao : ");
scanf("%f %f", &a, &b);
scanf(" %c", &car);
if(car == 'a'){
printf("A soma dos numeros e: %f", a+b);

}else if(car == 'b'){
printf("A subtracao dos numeros e: %f", a-b);

}else if(car == 'c'){
printf("A multiplicacao dos numeros e: %f", a*b);

}else if(car == 'd'){
    if(b!=0){
    printf("A divisao dos numeros e: %f", a/b);
    }else
     printf("divisicao invalida");
}
else if (car == 'e') {
    if (b != 0) {
        printf("O modulo e: %f\n", fmod(a, b));
    } else {
        printf("Modulo invalido (divisao por zero)\n");
    }
}else{
printf("Opcao invalida");
}
    return 0;
}