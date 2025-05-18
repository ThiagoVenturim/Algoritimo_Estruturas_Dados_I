#include <stdio.h>

int par (int n){
    return n*2;
}
int main (){
int num;
printf ("Digite um numero inteiro: ");
scanf ( "%d", &num);
printf(" o n-esimo termo e %d", par(num));
    return 0;
} 