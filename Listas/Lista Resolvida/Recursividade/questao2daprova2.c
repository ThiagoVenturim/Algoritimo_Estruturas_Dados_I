#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 200
int contarC(char *str, char car) {
    if(*str == '\0') {
        return 0;
    }else{
        if (*str == car) {
            return 1+contarC(str + 1, car);
        }
        return  contarC(str + 1, car);
    }
}

int main() {
char *str = (char *)malloc(MAX * sizeof(char));
if (str == NULL) {
    printf("Erro alocar memoria \n");
    return 1;
}
printf("Digite a string: ");
fgets(str, MAX, stdin);
str= (char *)realloc(str, (strlen(str) - 1 ) * sizeof(char));
if (str == NULL) {
    printf("Erro realocar memoria\n");
    free(str);
    return 1;
}
char car;
printf("Digite sua busca ");
scanf("%c", &car);
printf("O caracter '%c' aparece %d vezes na string.\n", car, contarC(str, car));
free(str);
return 0;


}