#include <stdio.h>
int main(){
int num;
printf("Digite um numero: ");
scanf("%d", &num); 
for(int i =1; i<= num; i++){
printf("%d ", i*3 );
}
    return 0;
}