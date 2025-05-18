#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &a, &b, &c);
    
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Os valores podem formar um triângulo.\n");
     
        if (a == b && b == c) {
            printf("O triângulo é equilátero.\n");
        } else if (a == b || a == c || b == c) {
            printf("O triângulo é isósceles.\n");
        } else {
            printf("O triângulo é escaleno.\n");
        }
    } else {
        printf("Os valores NÃO podem formar um triângulo.\n");
    }
    
    return 0;
}
