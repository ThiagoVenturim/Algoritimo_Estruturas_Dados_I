#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
int main() {
    char str[MAX];
    int cont = 0, in_palavra = 0;
    fgets(str, MAX, stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            str[i] = '_';
            in_palavra = 0;
        } else {
            if (!in_palavra) {
                cont++;
                in_palavra = 1;
            }
        }
    }
    printf("Sua string tem %d palavras\n", cont);
    printf("Sua string = %s", str);
    return 0;
}
