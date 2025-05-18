#include <stdio.h>
int main () {
float nota;
printf("Digite sua nota:\n ");
    scanf("%f", &nota);
if( nota >=10 || nota <=0){
    do{
        printf(" nota invalida:\n ");
        printf("Digite novamente :\n ");
        scanf("%f", &nota);
    }while( nota <=10 || nota >=0);
}else{
printf(" nota registrada %.2f", nota);
}
return 0;
}
  