#include <stdio.h>
int main (){
int num, soma = 0;
do{
printf("Digite num");
scanf("%d", &num);
if( num%2==0 &&  num%3==0 ){
continue;
}else 
soma+=num;
}while(num!= -1);

printf("%d", soma++);

    return 0;
}