#include <stdio.h>
#include <math.h>

// Função para calcular o fatorial de um número
int fatorial(int num) {
    int fator = 1;
    for (int i = 1; i <= num; i++) {
        fator *= i;
    }
    return fator;
}

// Função para calcular o n-ésimo termo
float n_ensimo(int n1, int x1) {
    return (n1 * 2) * (pow(x1, n1)) / fatorial(n1);
}

// Função para imprimir os n primeiros termos
void n_primeiro(int n2, int x2) {
float resultado= 0; 
    for (int i = 1; i <= n2; i++) {
       resultado= i*n_ensimo(i, x2);
        printf("Termo %d: %f\n", i, resultado);
    }
}

// Função para calcular o somatório dos n primeiros termos
float somatorio(int n3, int x3) {
    float resultado = 0; // Usar uma variável local para acumular o somatório
    for (int i = 1; i <= n3; i++) {
        resultado += n_ensimo(i, x3);
    }
    return resultado;}

// Função para calcular o produtório dos n primeiros termos
float produtorio(int n4, int x4) {
    float resultado = 1; // Inicializar como 1 para multiplicação
    for (int i = 1; i <= n4; i++) {
        resultado *= n_ensimo(i, x4);
    }
    return resultado;
}

// Função para capturar entrada do usuário e realizar a operação escolhida
void escolhas() {
    int num, x;
    char opcao;

    printf("Digite num e x: ");
    scanf("%d %d", &num, &x);

    if (num > 0) {
        printf("\nDigite uma opção:\n");
        printf(" a) n-ésimo\n");
        printf(" b) n-primeiro\n");
        printf(" c) somatório\n");
        printf(" d) produtório\n");

        scanf(" %c", &opcao); // O espaço ignora o caractere de nova linha (\n) residual

        switch (opcao) {
            case 'a':
                printf("n-ésimo: %f\n", n_ensimo(num, x));
                break;
            case 'b':
                n_primeiro(num, x);
                break;
            case 'c':
                printf("Somatório: %f\n", somatorio(num, x));
                break;
            case 'd':
                printf("Produtório: %f\n", produtorio(num, x));
                break;
            default:
                printf("Opção inválida\n");
        }
    } else {
        printf("num deve ser maior que 0\n");
    }
}

int main() {
    escolhas();
    return 0;
}