#include <stdio.h>
int multiplicacao(int a, int b){
if(b==0 )return 0;
else return a + multiplicacao(a, b - 1);
}


int main(){
int a, b;
printf(" Digite dois numeros:");
scanf("%d %d", &a, &b);
printf("Resultado: %d\n", multiplicacao(a, b)); 
return 0;    
}