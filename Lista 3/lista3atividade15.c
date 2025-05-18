#include <stdio.h>
#include <math.h>
int main(){

    char car;
    float raio;

    printf("Digite um caractere e o raio de um circulo: ");
    scanf("%c", &car);
    scanf("%f", &raio);

    if(car == 'T' ){
        float area, c1, c2, h;
        printf("Digite os valores dos catetos e da hipotenusa: ");
        scanf("%f %f %f", &c1, &c2, &h);
        area= (c1*c2*h)/4*raio;
        printf("Area do triangulo inscrito é : %.2f", area);

    }else if(car == 'Q'){
        float lado, area;
       lado= raio*sqrt(2);
         area= lado*lado;
        printf("Area do triangulo inscrito é : %.2f", area);

    }else if(car == 'H'){
        float lado, area;
        lado= raio;
        area= pow(3*lado, 2) * sqrt(3)/4;
         printf("Area do hexagono inscrito é : %.2f", area);


    }else printf("Caractere invalido");



    return 0;
}
