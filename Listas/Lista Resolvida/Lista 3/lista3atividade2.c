#include <stdio.h>
int main () {
float a;
printf("Escreva um numero real: ");
scanf("%f", &a);
if(a > 0){
    printf("O numero e maior que zero ");
}
else if(a < 0){
    printf("O numero e menor que zero");
}
else{
    printf("O numero e igal a zero");


}
return 0;
}