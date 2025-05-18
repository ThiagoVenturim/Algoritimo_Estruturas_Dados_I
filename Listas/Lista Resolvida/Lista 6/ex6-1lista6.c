#include <stdio.h> 
void classificaNumero(int n, int *pos, int *neg){
if(n>0){
*pos+=1;
}else if(n<0){
*neg+=1;
}else if(n==0){
return;
}
    return;
}

int main (){
int n, positivos=0, negativos=0;
printf("Digite um numero: ");
scanf("%d", &n);
do{
    classificaNumero( n, &positivos, &negativos);
    printf("Digite outro numero : ");
    scanf("%d", &n);
}while(n!=0);
printf("Quantidade de positivos %d e negativos %d \n", positivos, negativos);
    return 0;
}