#include <stdio.h>
int main(){
int num, cont=0;
do{
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num%4==0 && num%6==0){
        cont++;
    }

}while(num!= -1);
printf("A quantidade de numeros divisiveis por 4 e 6 e: %d\n", cont);

    return 0;
}