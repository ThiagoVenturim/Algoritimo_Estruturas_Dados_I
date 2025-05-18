#include <stdio.h>
#include <math.h>
int main () {
int num;
float lado, raioi, raioc, areacor;
printf("Digite um numero: ");
scanf(" %d", &num);
if((num == 2 ) || (num ==1)){
    printf("Escreva as medidas dos lados de um retangulo: ");
    float areacir, raio, base, altura;
    scanf(" %f %f", &base, &altura);
    raio = sqrt(pow(base, 2) + pow(altura, 2)) / 2;
    areacir = 3.14 * pow(raio, 2);
    printf("A area do circulo e: %.2f", areacir);
}else if((num == 3) || (num == 4) || (num == 5)){
    printf("Escreva as medidas do raio de um circulo: ");
    float raio, lado, areaqua;
    scanf(" %f", &raio);
    lado = raio* sqrt(2);
    areaqua = pow(lado, 2);
    printf("A area do quadrado e: %.2f", areaqua);
}else{
    printf("Escreva as medidas de um quadrado");
    scanf(" %f", &lado);
    raioi = lado / 2;
    raioc = lado * sqrt(2) / 2;
    areacor = 3.14 * pow(raioi, 2) - pow(raioc, 2);
    printf("A area do coroa circular e: %.2f", areacor);
}
    

    return 0;

}