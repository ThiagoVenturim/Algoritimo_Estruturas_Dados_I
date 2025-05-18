#include <stdio.h>
#include <math.h>

int par (int n){
    return n*2;
}
double umSobreImpar ( int n ){
    double result= 2*n+1;
    return 1.0/result;
    }
double parSobreImpar (int n, int x){
float result=0;
for(int i =0; i<=n; i++){
     result= par(n)*pow(x, n) * umSobreImpar(n);
}
return result;
}
int main(){
    int n; int x; 
    printf("Digite n: ");
    scanf(" %d %d", &n, &x);
    printf (" %lf", parSobreImpar(n,x));
        return 0;
    }