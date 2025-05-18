#include <stdio.h>

int main() {
    float a, b, c;
    
   
    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &a, &b, &c);
    
    
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Os valores podem formar um triângulo.\n");
    } else {
        printf("Os valores nao podem formar um triângulo.\n");
    }
    
    return 0;
}
