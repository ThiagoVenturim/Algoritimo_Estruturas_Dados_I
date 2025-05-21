#include <stdio.h>
#include <math.h>

float func1 (int num, float num1 ){
int potencia = 1;
float resultado, denominador =1; 
if(num%2==0){
    for(int i=1; i<=num; i++){
        potencia++;
        denominador+=2;
        resultado= -(pow(num1,potencia))/denominador;
    }
    }else{
resultado= +(pow(num1,potencia))/denominador;
    } 
    return resultado; 
}

int main(){
int num;
float x;
    printf("Digite o numero da sequencia e x: ");
    scanf("%d %f", &num ,&x);
    printf("%f", func1(num, x));
    return 0;
}