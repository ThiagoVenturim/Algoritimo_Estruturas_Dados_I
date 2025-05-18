
#include <stdio.h>
void converteTempo(int segundos, int *horas, int *minutos, int *segRestantes){
    *horas = segundos / 3600; // 1 hora = 3600 segundos
    *minutos = (segundos % 3600) / 60; // 1 minuto = 60 segundos
    *segRestantes = segundos % 60; // Segundos restantes

return;
}

int main(){
    int segundos, horas, minutos, segRestantes;
    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);
    converteTempo(segundos, &horas, &minutos, &segRestantes);
    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.\n", segundos, horas, minutos, segRestantes);
    return 0;
}