/*Crie uma struct chamada ponto2d que tenha como atributos x e y, ambos do tipo float.
Crie duas variáveis do tipo ponto2d, chamadas ponto_inicial e ponto_final
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float x;
    float y;

}ponto2d;

int menu(ponto2d  *ponto_inicial, ponto2d  *ponto_final){
    int num;
    float resultado;
    scanf("%d", &num);    
switch (num){
        case 1:
            printf(" Digite o ponto inicial ");
            scanf("%f %f", &(ponto_inicial)->x, &(ponto_inicial)->y);
        break;
        case 2:
            printf(" Digite o ponto final ");
            scanf(" %f %f", &(ponto_final)->x, &(ponto_final)->y);
        break;
        case 3:
            resultado = sqrt( pow ((ponto_final->x - ponto_inicial->x),2 ) + pow ((ponto_final->y - ponto_inicial->y),2 ));
            printf(" Foram digitados no ponto incial X= %.2f  Y= %.2f", (ponto_inicial)->x, (ponto_inicial)->y); 
            printf(" Foram digitados no ponto final X= %.2f  Y= %.2f",(ponto_final)->x, (ponto_final)->y); 
            printf(" A distancia entre os dois pontos %.2f \n ", resultado);
        case 4:
        printf("Fim do Programa: ");
        return 0;
        default:
        break;

}
return 1;
}
    int main(){
    ponto2d  ponto_inicial, ponto_final;
    do{
        printf("\n Digite qual das opcoes: \n");
        printf("1. Digitar os valores do ponto inicial: \n");
        printf("2. Digitar os valores do ponto final: \n");
        printf("3. Calcular e exibir a distancia entre os dois pontos: \n");
        printf("4. Sair \n");
    }while(menu( &ponto_inicial, &ponto_final)== 1);


return 0;   
}