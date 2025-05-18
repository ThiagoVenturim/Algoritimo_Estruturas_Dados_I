#include <stdio.h>
int main(){
int tempo;
printf("Digite o tempo em milesegundos e o caracter do planeta: ");
scanf("%d %c", &tempo, &planeta);
switch(planeta){
case 'M':
printf("O tempo em Marte é de %d segundos", tempo/1000*370);
break;
case 'V':
printf("O tempo em Venus é de %d segundos", tempo/1000*887);
break;
case 'T':
printf("O tempo em Terra é de %d segundos", tempo/980.7);
default:
printf("Planeta não encontrado");
}s


return 0;
}