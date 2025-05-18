#include <stdio.h>
int fatorial(int num){
    int fat = 1;
    for(int i = num; i>0; i--){
    fat*=i;
    }
    return fat;
    }

double somaFatorial(int n){
double E= 1.0;
for(int i = 1; i<=n; i++){
    E+= 1.0/fatorial(i);
}
    return E; 
}


int main(){
int num;
printf("Digite numero: ");
scanf("%d", &num);
printf(" %lf", somaFatorial(num));
return 0;    
}