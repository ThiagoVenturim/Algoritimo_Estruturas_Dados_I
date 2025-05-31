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
    printf("Memory allocation failed\n");
    return 1;
}
printf("Enter a string: ");
fgets(str, MAX, stdin);
str= (char *)realloc(str, (strlen(str) - 1 ) * sizeof(char));
if (str == NULL) {
    printf("Memory reallocation failed\n");
    free(str);
    return 1;
}
char car;
printf("Enter a character to search: ");
scanf("%c", &car);
printf("The character '%c' appears %d times in the string.\n", car, contarC(str, car));
free(str);
return 0;


}