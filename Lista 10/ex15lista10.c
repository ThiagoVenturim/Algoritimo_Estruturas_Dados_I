#include <stdio.h>
#define MAX 1000
int main(){
char str[MAX];
int cont = 1;
printf("Digite seu texto:\n");
fgets(str, MAX, stdin);
for(int i = 0; str[i] != '\0'; i++){
if(str[i]== 32){
    cont++;
}    
}
printf("Foram digitados %d palavras", cont);
    return 0;    
}