#include <stdio.h>
void troca(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
return;
}
int main(){
int a, b;
printf("Digite dois numeros inteiros: ");
scanf("%d %d", &a, &b);
troca(&a, &b);
printf(" Numeros trocados %d %d", a, b);

    return 0;
}
