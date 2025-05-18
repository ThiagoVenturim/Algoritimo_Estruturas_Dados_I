#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
int palindromo(char str[], int tamanho){
int j = tamanho-1;
for( int i=0; i<tamanho/2; i++ , j-- ){
    if(str[i]!=str[j]){
        return 0;
    }
}
return 1;
}
int main(){
char str[MAX];
int tamanho=0;
scanf(" %s", str);
for(  ; str[tamanho] != '\0'; tamanho++){
}
if(palindromo(str, tamanho)){
printf(" Palindromo");
}else{
printf(" NAO Palindromo");
}
return 0;
}