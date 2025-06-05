#include <stdio.h>
int primo(int n, int i){
    if(i>n/2){
        return 1; 
    }else if(n%i==0){
        return 0;
    }else{
        return primo(n, i+1);
    }
}
int main(){
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
        if(primo(n, 2)){
            printf("Numero eh primo\n");
        }else{
            printf("Numero nao eh primo\n");
        }

    return 0;
}