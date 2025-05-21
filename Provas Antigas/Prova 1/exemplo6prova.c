#include <stdio.h>

int fatorial(int n) {
    if (n == 1) {
        return 1;
    } else 
        return n * fatorial(n-1);
}
int main (){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Fatorial de %d ", n = fatorial(n));
    return 0;
}