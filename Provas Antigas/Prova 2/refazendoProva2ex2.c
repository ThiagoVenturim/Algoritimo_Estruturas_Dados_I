// Bibliotecas 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 60  // Tamanho maximo da string


int contarO(char *str){ // Funcao recursiva para contar o numero de caracteres 'o' ou 'O'
  if(*str== '\0'){
    return 0;
  }else{
    int c = tolower(*str);
    if( c =='o' || c == 'O'){
        return 1 + contarO(str + 1);
    }else{
        return contarO(str + 1);
    }
  }
}

void Inverter(char *str, char *in ,int tamanho){  // Funcao para inverter a string
for(int i =0; i<tamanho; i++){
    *(in+i) = * (str +tamanho - i-1) ;
}
*(in + tamanho) = '\0'; // Adiciona o caractere nulo ao final da string invertida
return;
}

int main(){
    int tamanho;
    char *str = (char *)malloc(MAX * sizeof(char));
    char *in; 
    if(str == NULL){
        printf(" Erro ao alocar memoria \n");
        return 1;
    }
    printf("Digite uma string: ");
    fgets(str, MAX, stdin);
    fflush(stdin);
    tamanho = strlen(str);
    str= (char *) realloc(str, tamanho * sizeof(char)); // Realocando memoria para somente usar espaço necessario 
    in = (char *)malloc(tamanho * sizeof(char)); 
    if(str == NULL || in == NULL){
        printf(" Erro ao realocar memoria \n");
        free(str);
        return 1;
    }
    printf(" A string tem %d caracteres 'o' \n", contarO(str));
    Inverter(str, in, tamanho);
    printf(" A string invertida e: %s \n", in);
    free(str);
    free(in);

return 0;    
}