#include <stdio.h>
void multiplos5 (int num){

for(int i=1; i<=num; i++){
    if(i%5==0){
        printf("%d ", i);
}
}
}

int main (){
int num;
printf("Digite num: ");
scanf("%d", &num);
multiplos5(num);
return 0;
}