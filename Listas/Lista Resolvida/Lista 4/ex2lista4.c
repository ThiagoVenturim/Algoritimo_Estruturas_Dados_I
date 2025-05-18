#include <stdio.h>
int main () {
int  numc, soma= 1;
printf("Digite o numero da sequncia: ");
scanf("%d", &numc);
for (int i = 1; i <= numc; i++, soma += 2) {
printf("%d ", soma );

 }


return 0;
}