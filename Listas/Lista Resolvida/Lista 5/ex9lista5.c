#include <stdio.h>
#include <math.h>

int par(int n){
    return n * 2;
}

double umSobreImpar(int n){
    return 1.0 / (2 * n + 1);
}
double parSobreImpar(int n, int x){
    double result = 0;  
    for (int i = 0; i <= n; i++) {
        result += par(i) * pow(x, i) * umSobreImpar(i);
    }
    return result;
}
int fator(int n){
    int f = 1;          
    for (int i = n; i >= 1; i--){  
        f *= i; 
    }            
    return f;
}

int main(){
    int n, x; 
    printf("Digite n e x: ");
    scanf("%d %d", &n, &x);
    printf("Resultado: %lf\n", parSobreImpar(n, x));
    return 0;
}