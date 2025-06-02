#include <stdio.h>

void par(int a, int b){
    if(a>b){
        return;
    }else{
        if(a % 2 == 0){
            printf("%d ", a);
        }
        return par(a + 1, b);
    }
}

void impar(int a, int b){
        if(a>b){
            return;
    }else{
        if(a % 2 != 0){
            printf("%d ", a);
        }
        return impar(a + 1, b);
    }
}


int main(){
    int a, b;
    printf(" Digite o intervalo sendo a e b e b > a:  ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("Erro: b deve ser maior que a.\n");
        return 1;
    }
    printf("Pares: ");
    par(a, b);
    printf("\nImpares: ");
    impar(a, b);
    printf("\n");

return 0;
}