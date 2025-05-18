#include <stdio.h>
int main (){
int num; 
double soma = 0.0;
while (1) //verificar o numero ater ser valido
{
    printf("Digite um numero inteiro: "); 
    scanf("%d", &num);
    if(num>0){                                               
    break; 
    }else if(num<=0)
    printf("Numero invalido : ");
}

for( int i =1; i <= num; i++){        //loop iniciar conta
soma+= 1.0/i;
}

printf("o seu resultado é: %.6lf\n", soma);    

    return 0;
}