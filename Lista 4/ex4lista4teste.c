#include <stdio.h>
int main () {
int A, B;
printf("Digite dois numeros inteiros: ");
scanf("%d %d", &A, &B);
for(int i = 0; i <= B && ( A > B || i<=A); i++){
if(A >=B ){
        B+=i;   
        printf("%d\n", B% 5==0);
 }
 }else if(A <=B ){
        A+=i;   
        printf("%d\n", B % 5==0);
         }else 
    printf("Nao ha numeros multiplos de 5 no intervalo\n");
    
return 0;
}