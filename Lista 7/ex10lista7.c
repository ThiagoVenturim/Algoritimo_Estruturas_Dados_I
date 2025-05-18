#include <stdio.h>

int pertenceFibonacci(int num) {
    int anterior = 0, atual = 1, proximo;
    if (num == 0 || num == 1) {
        return 1; 
    }
    
    while (atual < num) {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
        
        if (atual == num) {
            return 1;
        }
    }
    
    return 0;
}

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if (pertenceFibonacci(num)) {
        printf("O numero %d pertence \n", num);
    }else {
        printf("O numero %d nao pertence \n", num);
    }
    return 0;
}