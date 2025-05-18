#include <stdio.h>
int main () {
int A, B;
printf("Digite dois numeros inteiros: ");
scanf("%d %d", &A, &B);

if(A >=B ){
    for(; A >= B; B++){
        if(B % 5 == 0){
        printf("%d\n", B);
        }
    }
}else if(A <=B ){
    for(; A<= B ; A++){
        if(A% 5 == 0){
        printf("%d\n",A);
        }
    }
}else 
printf("Nao ha numeros multiplos de 5 no intervalo\n");

    return 0;
}