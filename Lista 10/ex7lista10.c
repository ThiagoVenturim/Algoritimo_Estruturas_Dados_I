#include <stdio.h>
#define MAX 1000
int main(){
char text[MAX], palavra[MAX];
int achou = 1;
int i, j;
printf("Digite o texto: ");
fgets(text, MAX, stdin);
printf("Digite a palavra: ");
scanf("%s", palavra);
if (palavra[0] == '\0'){
    achou = 0;
}
for(i = 0; text[i] != '\0'; i++){
    for (j = 0; palavra[j] != '\0'; j++){
        if (text[i+j] != palavra[j]){
            break;
        }
    } 
        if (palavra[j] == '\0'){
            achou = 1;
        }
    }
if (achou == 1){
        printf("A palavra %s foi encontrada no texto.\n", palavra);
}else{
        printf("A palavra %s nao foi encontrada no texto.\n", palavra);
}


    return 0;
}