#include <stdio.h>
int main(){
int num;
printf("Digite um numero: ");
scanf("%d", &num);

for(int coluna=num ; coluna > 0; coluna--){
for( int escrita =1 ; escrita <= num; escrita ++){
    printf("%d ", escrita);
}
num--;
printf(" \n");
}
return 0;
}