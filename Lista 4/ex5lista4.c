#include <stdio.h>
int main (){
int num, i= 0;

printf("digite um numero inteiro: ");
scanf("%d", &num);
for (; i < num; i++) {

    for (int j = 0; j < num - i - 1; j++) {
        printf(" ");
    }
   
    for (int k = 0; k < 2 * i + 1; k++) {
        printf("*");
    }

    printf("\n");
}
return 0;
}