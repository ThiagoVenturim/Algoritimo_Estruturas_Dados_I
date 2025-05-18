#include <stdio.h>
#include <math.h>

int main(){
int num1, resultado=0;
float num2, resultado2=0 ;
printf("Digite dois numeros sendo um inteiro e um real: ");
scanf("%d %f", &num1, &num2);
if(num1%2==0){
    printf(" %d ", resultado=pow(num1, 2));
}else if(num1%2!=0){
    printf( "%d ", resultado=pow(num1, 3));
}
if(num2>10){
    printf(" %.2f", resultado2= num1+num2);
}else if(num2<=10){
    printf(" %.2f", resultado2=num1*num2);
}
return 0;
}