#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define MAX 1000

int contarVogais(char *str){
int cont;
if( *str == '\0'){
     return 0;
}else if( *str =='u' || *str =='a' ||*str =='e' || *str =='i' || *str =='o'){
   cont =1;
}else{
return cont + contarVogais(str++)
}
} 
int main(){
char str[MAX];
fgets(str, MAX, stdin);
printf(" %d", contarVogais(str));

}
