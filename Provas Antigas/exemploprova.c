#include <stdio.h>
#include <math.h>

int main (){
int num1; 
float num2, resultado;
printf("Digite  um numero  inteiro: ");
scanf("%d ", &num1);
if(num1%3==0){
   printf("%f", resultado= sqrt(num1));
}else{
    printf("%f", resultado= pow(num1,2));
}
printf("Digite um numero real: ");
scanf(" %f ", &num2);
if(num2>0){
    printf("%f", resultado= log(num2));
}else{
    printf("%f", resultado= fabs(num2));
}
return 0;
}