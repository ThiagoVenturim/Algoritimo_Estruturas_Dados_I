#include <stdio.h>

int main () {
int numeros[10], pares = 0;
for(int i = 0; i < 10; i++) {
scanf("%d", &numeros[i]);
if(numeros[i]%2==0) {
  pares++;
}
}
printf("Quantidade de pares: %d\n", pares);
  return 0;
}