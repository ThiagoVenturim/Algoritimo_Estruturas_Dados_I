
#include <stdio.h> 
int main()
{
    float a, b;
    printf("Escreva dois numeros reais");
    scanf("%f %f", &a, &b);
    if (a > b)
    {
        printf("O maior numero e %f", a);
    }else{
        printf(" O maior numero e %f", b);
    }if(a==b){
        printf(" os numeros sao iguais\n");

    }
    
   
   

    return 0;
}