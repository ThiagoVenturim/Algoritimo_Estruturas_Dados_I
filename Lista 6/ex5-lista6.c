#include <stdio.h>
void maiorMenor(int a, int b, int *maior, int *menor){
if(a>b){
*maior=a;
*menor=b;
}else{
    *maior=b;
    *menor=a;
}
    return ;
}
int main(){
int maior, menor, num, num1;
printf("Digite dois numero: ");
scanf(" %d %d", &num, &num1);
maiorMenor(num, num1, &maior, &menor);
printf("%d e maior e %d menor", maior, menor);
    return 0;
}