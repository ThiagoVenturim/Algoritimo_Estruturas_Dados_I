#include <stdio.h>
int main (){
int L, primeiro = 1 , anterior = 0, opp= 0;

while (1) //verificar o numero ater ser valido
{
    printf("Digite um numero: \n");
    scanf("%d", &L);
    if(L>=0){                                               
    break; 
    }else if(L<0)
    printf("numero invalido:\n ");
}
     for( int i = 0; i<L;  i++ ){
        printf(" %d", primeiro);
        opp= primeiro + anterior;
        anterior = primeiro;
        primeiro= opp;
    
 }
    return 0;
}