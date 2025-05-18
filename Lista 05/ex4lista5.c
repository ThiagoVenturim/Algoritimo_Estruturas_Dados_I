#include <stdio.h>
double umSobreImpar ( int n ){
int result= 2*n+1;
 return 1.0/result;
}
double somaUmSobreImpar (int n){
    double resultado = 0;
for(int i = 0; i <= n; i++){
    resultado+= umSobreImpar(i);
}
return resultado-=1;
}
int main(){
    int n;
    printf("Digite n: ");
    scanf(" %d", &n);
    printf (" %lf", somaUmSobreImpar(n));
    return 0;
}