#include <stdio.h>
int main (){
int a, b;
printf("digite dois numeros inteiros");
scanf(" %d %d", &a, &b);
if(a>b){
printf(" %d ", a-b);
}else{
printf(" %d ", a+b); 
}
char letra;
printf("digite uma letra");
scanf(" %c", &letra);
switch (letra){
case 'a':
case 'e':
case 'i':
case 'o': 
case 'u': 
printf("vogal");
break;
default:
printf("Termo não encontrado");
}

    return 0;
}