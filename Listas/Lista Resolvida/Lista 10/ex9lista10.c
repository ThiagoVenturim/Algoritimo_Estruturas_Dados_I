#include <stdio.h>
#define MAX 1000
int main(){
char texto[MAX];
printf("Digite o texto: ");
fgets(texto, MAX, stdin);
for(int i = 0; texto[i] != '\0'; i++){
if( (texto[i] >= 100 && texto[i] <= 119) || (texto[i] >= 65 && texto[i] <= 87)){
texto[i] = texto[i] +3;
}else if((texto[i] >= 120 && texto[i] <= 122) ||  (texto[i]  >= 87 && texto[i] <= 90)){
texto[i] = texto[i] -23;
}
}
printf(" seu texto em codigo de cesar e: %s", texto);

return 0;
}