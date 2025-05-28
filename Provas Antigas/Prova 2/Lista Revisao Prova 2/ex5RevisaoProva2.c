/*(String – inversão) Implemente um programa em C que leia uma string de até 100
caracteres e imprima a string invertida. A função strrev não deve ser utilizada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
void imprimir_invertida(char *str, int tamanho){
    if(tamanho <0 ){
        return;
    }else{
        printf("%c", * (str+tamanho));
        imprimir_invertida( str , tamanho - 1);
    }
}


int main(){
    int tamanho;
    char *str = (char *)malloc(MAX * sizeof(char));
    if( str== NULL){
        printf("Erro ao alocar memOria.\n");
        return 1;
    }
    printf("Digite uma string (ate 100 caracteres): ");
    fgets(str, MAX, stdin);
    printf("Tamanho da string: %d\n", tamanho);
    str = (char *)realloc(str, tamanho*sizeof(char));
    if( str == NULL){
        printf("Erro ao realocar memória.\n");
        return 1;
    }
    imprimir_invertida(str, tamanho - 1);
    free(str);

return 0;
}