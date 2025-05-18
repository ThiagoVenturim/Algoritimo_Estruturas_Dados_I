#include <stdio.h>
int main () {

int A, B, C;
printf("Digite 3 numeros inteiros: ");
scanf("%d %d %d", &A, &B, &C);
if((C%A==0) && (C%B==0)){
    printf("Divisivel por ambos");

}else if ((C%A==0) || (C%B==0)){
 printf("Divisivel por um dos dois");
}else if ((C%A!=0) && (C%B!=0)){
printf("Nao e divisivel por nenhum ");
}else if((B!=0) || (A!=0)){
    printf("Divisao invalida");
}

    return 0;
}