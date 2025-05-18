#include <stdio.h> 
int main()
{
    int a, b, c;
    printf("Escreva dois numeros inteiros");
    scanf("%d %d", &a, &b);
    c = (a > b) ? a : b;
    printf("O maior numero e %d", c);

    return 0;
}