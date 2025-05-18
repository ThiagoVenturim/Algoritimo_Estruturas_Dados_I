#include <stdio.h>
void atualizarNota(float *nota){
*nota+= 0.5;
if(*nota>10){
    *nota=10;
}


}
int main(){
float nota;
printf("Digite sua nota: ");
scanf("%f", &nota);
atualizarNota(&nota);
printf("Sua nota atualizada %.2f", nota);
}