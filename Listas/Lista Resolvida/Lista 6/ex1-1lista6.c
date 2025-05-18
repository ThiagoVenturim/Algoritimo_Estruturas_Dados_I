#include <stdio.h>

int main(){
    int num, impar=0, media=0, digitados=0; 
do{
    printf("Digite um numero: ");
    scanf("%d", &num);
if(num%2!=0){
impar++;
}
if(num!=0){
media+=num;
digitados++;
}
}while(num!=0);


printf("Foram digitados %d impares e %f", impar, (float)media/digitados);

return 0;
}