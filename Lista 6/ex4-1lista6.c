#include <stdio.h>
int main(){
int num;
float num1, num2;
do{
printf("Digite sua opcao");
printf("1. Somar \n");
printf("2. Subtrair\n");
printf("3. Multiplicar\n");
printf("4. Dividir\n");
printf("5. Sair \n");
scanf("%d", &num);
if (num>0 && num<5){
  printf("Digite dois numeros: ");
scanf("%f %f", &num1, &num2);
}
switch(num){
   
    case 1:
    printf(" %.2f", num1+num2);
    break;

    case 2:
    printf(" %.2f", num1-num2);
    break;

    case 3:
    printf(" %.2f", num1*num2);
    break;

    case 4:
        if(num2!=0){
            printf(" %.2f", num1/num2);
        }else{
        printf(" Divisão por zero invalido;");
        }
    break;
    case 5:

        printf("Fim do programa: ");

    break;
    }
}while(num!=5);
    return 0;
}
