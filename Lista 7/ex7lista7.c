#include <stdio.h>

int potencia(int base, int pot){
if(pot==0){
    return 1;
}else{
return base*potencia(base,pot-1);
}
}
int main(){
int base, pot;
printf("Digite a base e a potencia: ");
scanf("%d %d", &base, &pot);
printf( "%d\n", potencia(base,pot));
}