#include <stdio.h>
int main(){
char str[100];
char ter;
int tam=0;
printf("Digite uma string: ");
scanf(" %s", str);

for(int i=0; str[i]!='\0'; i++){
    tam++;
}
tam--;
for(int i=0; i< tam ; i++, tam--){
    ter = str[i];
    str[i] = str[tam];
    str[tam] = ter;

}
printf("A string invertida  %s", str);

return 0;
}