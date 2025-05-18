#include <stdio.h>
#include <string.h>
#define MAX 1000

int main() {
char text[MAX], palavra[MAX];
int i, j, cont = 0;
printf("Digite o texto: ");
fgets(text, MAX, stdin);
printf("Digite a palavra: ");
scanf("%s", palavra);
int len_text = strlen(text);
int len_palavra = strlen(palavra);
for(i = 0; i <= len_text - len_palavra; i++) {
    for(j = 0; j < len_palavra; j++) {
        if(text[i + j] != palavra[j]) {
           break;
        }
    }
    if(j == len_palavra) {
        cont++;
    }
}

if (cont > 0) {
    printf("A palavra '%s' foi encontrada %d vezes no texto.\n", palavra, cont);
} else {
    printf("A palavra '%s' nao foi encontrada no texto.\n", palavra);
}

    return 0;
}
