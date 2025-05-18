#include <stdio.h> 
int main()
{
    float a, b;
    printf("Escreva dois numeros reais");
    scanf("%f %f", &a, &b);
 if(b != 0 ){


    printf( "O resultado da divisão é %.2f\n", a/b);

 }

     
     printf("não é possivel dividir por zero\n");

   
   

    return 0;
}