#include <stdio.h>
#include <math.h>
double somaSequencia(int n){
    double soma=0.0;
    for(int i=1; i<=n; i++){
        soma+= (pow(i,2)+1)/(i+3.0);
    }
    return soma;
    }
double exe12(int n, float x){
    double resultado =0.0;
return resultado+= somaSequencia(n)*x;
}
    int main(){
    int num;
    float x;
    printf("Digite um numero inteiro e x :" );
    scanf("%d %f", &num, &x);
    printf(" %.2lf ", exe12(num, x));
        return 0;
    } 