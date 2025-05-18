#include <stdio.h>
#define MAX 1000
int main(){
char str[MAX];
int numero = 0;
int letra = 0;
int tamanho;
printf("Enter a string: ");
fgets(str, MAX, stdin);
for( tamanho = 0; str[tamanho] != '\0'; tamanho++){
if(str[tamanho] >=48  && str[tamanho] <=57 ){
numero++;
}else if((str[tamanho] >= 65 && str[tamanho] <= 90) || (str[tamanho] >= 97 && str[tamanho] <= 122)){
letra++;
}
}
if(numero == 0){
printf("A string contem somente letras");
}else if(letra == 0){
printf("A string contem somente numeros");
}else{
printf("A string contem letras e numeros");
}
    return 0; 
}