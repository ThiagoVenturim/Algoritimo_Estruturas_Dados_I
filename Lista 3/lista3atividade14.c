#include <stdio.h>
int  main () {
char Car; 
printf("Escreva um caracter que represente o dia da semana: ");
scanf(" %c", &Car);
if (Car == 'D' || Car == 'd') {
    printf("Domingo");
}else if((Car == 'T') || (Car == 't')) {
printf("Terça-feira");
}else if((Car == 'S') || (Car == 's')) {
printf("Segunda-feira ou Sabado");
}else if((Car == 'Q') || (Car == 'q')) {
printf("Quarta-feira ou Quinta-feira");
}else {
    printf("Caracter inválido");
}
    return 0;
}