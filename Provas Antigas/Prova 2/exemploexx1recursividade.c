#include <stdio.h>
int fator(int num){
    if (num==0){ //caso base 
        return 1;
    }else{
        return num*fator(num-1);
    }
}

int main(){
    int  num;
    printf("Digite num: "); 
    scanf("%d", &num); //ler numero digitado
    if(num <= 0){ // verificar se o numero digitado é 0 ou menor que zero
        printf("Numero digitado invalido ");
        return 1;
    }
    printf( " O fatorial de %d e %d", num, fator(num)); 
return 0;
}