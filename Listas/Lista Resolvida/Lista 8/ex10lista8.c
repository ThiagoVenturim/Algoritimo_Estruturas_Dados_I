#include <stdio.h>
int main(){
int entrada[10], iventido[10];

printf("Digite 10 numeros reais:\n");

for (int i=0; i<10; i++){
scanf("%d", &entrada[i]);
}
for(int i=0; i < 10 ; i++){
   iventido[9-i] = entrada[i];
}

for(int i=0; i<10; i++){
printf("%d ", iventido[i]);
}

    return 0;
}