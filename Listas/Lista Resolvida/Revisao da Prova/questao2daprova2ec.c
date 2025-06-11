#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int contarVogais(char *str){
if(*str=='\0'){
    return 0;
}else{
    char c = tolower(*str);
    if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
        return 1 + contarVogais(str+1);
    }
    return contarVogais(str+1);

}
}

int main(){
char string[100];
printf("Digite sua string: ");
fgets(string, 100, stdin );
printf(" A sua string tem %d vogais", contarVogais(string));
return 0;
}