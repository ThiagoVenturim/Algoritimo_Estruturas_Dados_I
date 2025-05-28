#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100
int contarVogais(char *palavra){
if(*palavra == '\0'){
    return 0;
}else{
    int c = tolower(*palavra);
    if(c== 'a'|| c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        return 1 + contarVogais(palavra + 1);
}
    return contarVogais(palavra + 1);
}
}

int main(){
    char *palavra;
    int tamanho;
    palavra = (char *)malloc(MAX * sizeof(char));
    if (palavra == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Digite uma string: ");
    fgets(palavra, MAX, stdin);
    tamanho = strlen(palavra);
    palavra = realloc(palavra, (tamanho + 1) * sizeof(char));
    if (palavra == NULL) {
        printf("Memory reallocation failed\n");
        free(palavra);
        return 1;
    }
    printf(" A string digita tem  %d vogais\n", contarVogais(palavra));
    free(palavra);


return 0;
}