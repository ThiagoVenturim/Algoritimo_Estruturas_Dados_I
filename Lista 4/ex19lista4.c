#include <stdio.h>
int main (){
float X, Y;
do{
    printf(" Digite as cordemadas X e Y de um ponto: ");
    scanf("%f %f", &Y ,&X);
if( X > 0 && Y > 0){
    printf("primeiro  quadrante\n");
}else if (X > 0 && Y < 0){
    printf("segundo quadrante\n");
}else if (X <  0 && Y < 0){
    printf("terceiro  quadrante\n");
}else if (X < 0 && Y > 0){
    printf("quarto quadrante\n");
}else if(X == 0 || Y == 0){
 printf("Quando uma coordenada e zero, o ponto nao pertence a nenhum quadrante, mas esta em um dos eixos coordenados\n.");
}
}while(X!=0 && Y!=0);

    return 0;
}