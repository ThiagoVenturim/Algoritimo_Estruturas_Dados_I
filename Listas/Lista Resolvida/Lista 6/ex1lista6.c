#include <stdio.h>
void troca (int *a, int *b){
int c;
c = *b;
*b = *a;
*a = c;
    return;
}
int main(){
int num1, num2;
printf("Digite dois numeros");
scanf(" %d %d", &num1, &num2);
troca(&num1, &num2);
printf(" %d %d", num1, num2);
    return 0;
}