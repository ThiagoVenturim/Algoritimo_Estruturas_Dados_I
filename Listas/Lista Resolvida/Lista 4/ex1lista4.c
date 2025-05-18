#include <stdio.h>
int main () {
int quantnum, num, soma = 0;
printf ("Digite a quantidade de numeros: ");
scanf ("%d", &quantnum);
    for (int i = 0; i < quantnum; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);
        soma += num;
}
printf(": %d\n", soma);
    return 0;
}