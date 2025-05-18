#include <stdio.h>
int main(){
float entrada[10], saida[10];
int cont=0;
printf("Digite 10 numeros reais:\n");

for (int i=0; i<10; i++){
scanf("%f", &entrada[i]);
}

for(int i=0; i<10 ; i++){
    for(int tudo=0; tudo<10; tudo++){
        if(entrada[i] > entrada[tudo]){
            cont++;
    }
}
    saida[cont] = entrada[i];
    cont = 0;
    }
for(int i=0; i<10; i++){
printf("%.2f ", saida[i]);
}
    return 0;
}