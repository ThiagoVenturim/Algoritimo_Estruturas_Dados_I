#include <stdio.h>
int main (){
int num, primeiro = 1 , anterior = 0, opp= 0;

while (1) //verificar o numero ater ser valido
{
    printf("Digite um numero: \n");
    scanf("%d", &num);
    if(num>=0){                                               
    break; 
    }else if(num<0)
    printf("Numero invalido:\n ");
}

     for( int i = 0; primeiro< num;  i++ ){
        printf(" %d", primeiro);
        opp= primeiro + anterior;
        anterior = primeiro;
        primeiro= opp;

        
 }
    return 0;
}