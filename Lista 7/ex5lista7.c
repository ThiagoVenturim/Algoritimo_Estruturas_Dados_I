#include <stdio.h>

void  maiormenor( int *maior, int *a, int *b){

    if (*a > *b){
     *maior = *a; 
    }else{
     *maior = *b; 
    }
return;
}

int main(){
int a, b, maior;
printf("Digite dois numeros: ");
scanf("%d %d", &a, &b);
maiormenor( &maior, &a, &b);
printf("O maior numero e: %d\n", maior);

    return 0;
}