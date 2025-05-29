/*(String – contagem de caractere com ponteiros) Escreva uma função em C que
receba uma string e um caractere como parâmetro e retorne quantas vezes esse caractere
aparece na string. A função deve utilizar ponteiros e não pode utilizar índices.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int contarCaracter(char *str, char c) {
  if( *str== '\0'){
    return 0;
  }else{
    if(tolower(*str) == tolower(c)){
      return 1 + contarCaracter(str + 1, c);
    } else {
      return contarCaracter(str + 1, c);
    }
  }
}


int main(){
printf(" Iniciando o programa...\n");
char *str = (char *)malloc(MAX * sizeof(char));
char c;
if (str == NULL) {
    printf("Memory allocation failed\n");
    return 1;
}
printf("Digite uma string: ");
fgets(str, MAX, stdin);
printf("Realocando memoria para a string...\n");
str = (char *) realloc(str, strlen(str)*sizeof(char));
if (str == NULL) {
    printf("Memory reallocation failed\n");
    return 1;
}
printf("Escreva o caracter que quer contar: ");
scanf(" %c", &c);
printf("O caracter '%c' aparece %d vezes na string.\n", c, contarCaracter(str, c));
free(str);

return 0;
}