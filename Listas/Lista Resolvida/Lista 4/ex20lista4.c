#include <stdio.h>
int main (){
int opp, mes;
float salario;
do{  
printf(" Escolha uma opcao: 1.Novo salario; 2.Novo salario; 3.Novo salario ;4.Novo salario /n");
scanf("%d",&opp);
if(opp==1){
printf(" Novo Salário:");
    do{
    printf(" Digite seu salario:");
    scanf("%f", &salario);
    }while(salario<=0);
        if(salario >= 999.99){
            printf("salario atual: %f", salario*=1.15 );
        }else if ( salario >= 1000 &&  salario <= 2000 ){

            printf("salario atual: %f", salario*=1.10 );
        }else if ( salario > 2000){
            printf("salario atual: %f", salario*=1.05 );
        }
}else if (opp==2){
    do{
        printf(" Digite seu salario:");
        scanf("%f", &salario);
    }while(salario<=0);
    printf("Valor das ferias %f :", salario+= salario/3 );
}else if (opp==3){
    do{
        printf(" Digite seu salario:");
        scanf("%f", &salario);
    }while(salario<=0);
    do{
    printf("os meses de trabalho:");
    scanf("%d", &mes); 
    printf("O valor do decimo terceiro é %f :", (salario*mes)/12);
        }while (mes > 0 && mes <= 12);
}else 
printf("OPCAO INESISTENTE");
}while(opp>4);

    return 0;
}