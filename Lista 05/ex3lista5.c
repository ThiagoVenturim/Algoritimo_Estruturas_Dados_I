#include <stdio.h>
double umSobreImpar ( int n ){
    double result = 0;
    for (int i= 0; i<n; i+=2){
    result= 3.0+i;
 }
 return 1/result;
}
int main(){
int n;
        printf("Digite n: ");
        scanf(" %d", &n);
        printf (" %lf", umSobreImpar(n));
    return 0 ;
}