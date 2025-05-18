#include <stdio.h>
int main(){
char str[100];
int tam=0;
printf("Digite uma string: ");
scanf(" %s", str);
for(int i=0; str[i]!='\0'; i++){
    tam++;
}
while(tam>0){
    printf("%c", str[tam-1]);
    tam--;
}

return 0;
}