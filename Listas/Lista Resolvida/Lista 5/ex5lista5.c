#include <stdio.h>
int par (int n){
    return n*2;
}
double umSobreImpar ( int n ){
    double result= 2*n+1;
    return 1.0/result;
    }

double parSobreImpar (int n){
return par(n) * umSobreImpar(n);
}
double somaParSobreImpar(int n){
    double resultado = 0.0;
    for(int i = 0; i <= n; i++){
        resultado+= parSobreImpar(i);
    }
return resultado;
}  
int main(){
int n; 
printf("Digite n: ");
scanf(" %d", &n);
printf (" %lf", somaParSobreImpar(n));
    return 0;
}