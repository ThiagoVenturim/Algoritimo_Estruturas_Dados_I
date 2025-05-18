#include <stdio.h>
int main () {
int velmax, velcar;
printf("Digite a velocidade maxima da via e a velocidade do carro: ");
scanf("%d %d", &velmax, &velcar);
if ((velcar-velmax) <= 0){
    printf("Sem multa\n");
}else if((velcar-velmax)<=10){
    printf("Multa de R$ 50,00\n");
}else if((velcar-velmax)<=11 || (velcar-velmax)<=30){
    printf("Multa de R$ 100,00\n");
}else if((velcar-velmax)>30){
    printf("Multa de R$ 200,00\n");
    


}else 
printf("Dados invalidos: /n");





    return 0;
}