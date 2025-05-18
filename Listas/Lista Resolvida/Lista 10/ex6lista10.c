#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Digite uma string: ");
   scanf(" %s", str);
    int inicio = 0;
    int fim = strlen(str) - 1;
    int palindromo = 1;

    while (inicio < fim/2) {
        if (str[inicio] != str[fim]) {
            palindromo = 0;
            break;
        }
        inicio++;
        fim--;
    }

    if (palindromo) {
        printf("A string e palindroma\n");
    } else {
        printf("A string nao e palindroma\n");
    }

    return 0;
}
