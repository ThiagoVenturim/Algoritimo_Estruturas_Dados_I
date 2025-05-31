#include <stdio.h>
#include <stdlib.h>
int imprimir(int num, int cont){
if(num==0){
    return 0;
}else{
    printf("%d ", cont-num);
     return  imprimir(num - 1, cont); 
}
}

int main(){
int num;
printf("Digite um numero: ");
scanf("%d", &num);
if(num < 0){
    printf("Numero invalido!\n");
    return 1;
}
imprimir(num, num+1);
return 0;
}