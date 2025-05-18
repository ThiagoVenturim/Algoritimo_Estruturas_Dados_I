#include <stdio.h>
#include <math.h>

void calculaPotencias(int n, int *quadrado, int *cubo){
*quadrado = pow(n, 2);
*cubo = pow(n, 3);
    return;
}

int main(){
int numero, quadrado, cubo;
printf("Digite um numero inteiro: ");  
scanf("%d", &numero);
calculaPotencias(numero, &quadrado, &cubo);
printf("O quadrado  %d e %d o cubo e \n", quadrado, cubo);
    return 0;
}