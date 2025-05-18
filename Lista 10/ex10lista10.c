#define MAX 1000
#include <stdio.h>
int main(){
char palavra[MAX]; char palavra2[MAX];
printf("Digite duas palavra: ");
scanf("%s %s", palavra, palavra2);
for(int i = 0; palavra[i] != '\0'|| palavra2[i] != '0'; i++){
    if(palavra[i] > palavra2[i]){
        printf("%s , %s\n", palavra2, palavra );
        break;
    }else if(palavra[i] < palavra2[i]){
        printf("%s , %s\n", palavra ,palavra2);
        break;
    }if(palavra[i] == '\0' && palavra2[i] == '\0'){
        printf("As palavras sao iguais\n");
    }
}


return 0; 
}