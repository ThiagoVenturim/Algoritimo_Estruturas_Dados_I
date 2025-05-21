// Exercio 1 prova de 2024
/*Escreva um programa que leia um numero inteiro 
N. Se N for um numero par, calcule e o cubo de N. 
Caso N seja ímpar, calcular e mostrar o quadrado de N  */

#include <stdio.h>
#include <math.h>        //Bibliote de operacoes matematica potencia
int main(){
int N, resultado; //varial de numero inteiro N
printf("Digite um numro inteiro"); // mensagem para o usuario digitar um numero
scanf("%d", &N); //quardar o numero digitado na variavel
if(N%2==0){ //condicional para verificar se o numero é par
printf(" o cubo de %d e: %d", N, resultado = pow(N,3));
}else{ //condicional para se o numero for impar
    printf(" o cubo de %d e: %d", N, resultado = pow(N,2));
}
return 0;
}
