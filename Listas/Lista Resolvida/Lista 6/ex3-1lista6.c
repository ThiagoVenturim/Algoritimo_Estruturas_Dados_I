#include <stdio.h>
// Escreva um programa que leia dois números inteiros e imprima todos os números primos entre eles.
int primo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num1, num2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    printf("Numeros primos entre %d e %d:\n", num1, num2);
    for (int i = num1; i <= num2; i++) {
        if (primo(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
