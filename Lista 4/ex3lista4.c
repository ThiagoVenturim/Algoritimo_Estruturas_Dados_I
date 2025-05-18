#include <stdio.h>
int main () {
int  numc, soma= 1;

printf("Digite o numero da sequncia: ");
scanf("%d", &numc);
for (int i = 0, cont = 0 ; cont < numc; i++){
soma += 2;
if((soma % 7 == 0) || (soma % 3 == 0 && soma % 5 == 0)) {
    printf("%d ", soma );
    cont ++;
 }
}
return 0;
}