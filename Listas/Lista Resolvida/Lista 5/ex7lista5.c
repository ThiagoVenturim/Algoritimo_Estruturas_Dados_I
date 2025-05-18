#include <stdio.h>
#include <math.h>

int par (int n){
    return n*2;
}
double umSobreImpar ( int n ){
    double result= 2*n+1;
    return 1.0/result;
    }
double parSobreImpar (int n){
float result=0;
for(int i =0; i<=n; i++){
     result= pow(par(n), n) * umSobreImpar(n);
}
return result;
}
double soma (int n){
    double resultado = 0;
for(int i = 0; i <= n; i++){
    resultado+=  parSobreImpar (i);
}
return resultado;
}
int main(){
    int n; 
    printf("Digite n: ");
    scanf(" %d", &n);
    printf (" %lf", soma(n));
        return 0;
    }