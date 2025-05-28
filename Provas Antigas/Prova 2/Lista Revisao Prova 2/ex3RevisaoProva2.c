/* 3. (String – recursividade e ponteiros) Escreva uma função em C que receba uma string
e retorne o número de consoantes presentes nela. A função deve ser recursiva e utilizar
apenas aritmética de ponteiros.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int Consoantes(char *str){
    if(*str== '\0'){
        return 0;
    }else{
    char c = tolower(*str); 
    if( c>= 97 && c <=122){
        if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            return Consoantes(str + 1);
        }
    return 1 + Consoantes(str + 1);        
    }

    return  Consoantes(str + 1);
}
}


int main(){
    char *str= (char *) malloc(MAX * sizeof(char));
    if(str == NULL){
        printf(" Erro ao alocar memoria \n ");
        return 1;
    }
    printf("Digite uma string: ");
    fgets(str, MAX, stdin);
    str = (char *) realloc (str, strlen(str)* sizeof(char)); 
    if(str == NULL){
        printf(" Erro ao realocar memoria \n ");
        return 1;
    }
    printf("A string digitada foi: %s", str);
    printf("O numero de consoantes na string e: %d\n", Consoantes(str));
    free(str);

return 0;    
}