#include <stdio.h>
#include <math.h>

double somaSequencia(int n){
double soma=0.0;
for(int i=1; i<=n; i++){
    soma+= (pow(i,2)+1)/(i+3.0);
}
return soma;
}
int main(){
int num;
printf("Digite um numero inteiro:" );
scanf("%d", &num);
printf(" %.2lf ", somaSequencia(num));
    return 0;
}