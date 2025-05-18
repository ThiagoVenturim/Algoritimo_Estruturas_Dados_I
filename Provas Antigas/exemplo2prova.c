#include <stdio.h>

int main(){
int num, primeiro=1, segundo=2;
int total;
printf("Digite um numero: ");
scanf("%d", &num);
if(num>=3){
for(int i = num; i>= 3 ; i--){
total= primeiro+segundo;
primeiro= segundo;
segundo= total;
if(segundo%2==0){
    printf(" %d ", segundo);
}
}
}
    return 0;
}