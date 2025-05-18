int main() {
    float pm, soma = 0, antecesor = 0;

    for (int i = 1; i < 31; i++) {
    printf("Digite o índice pluviométrico do dia %d de janeiro: ", i);
    scanf("%f", &pm);
        soma += pm;
        if (pm > antecesor) {
            int maior= 0, dia = 0;
            maior+= pm;
            dia += i;
        }
        antecesor = pm;
    }
    printf("Média pluviométrica de janeiro: %.2f\n", soma / 31);
    printf("Índice maior que o anterior: %.2f no dia %d\n", maior, dia);
    

    return 0;
}
