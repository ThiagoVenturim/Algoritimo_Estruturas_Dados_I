#include <stdio.h>
int main(){
int x, y, maior, menor;
printf("Digite dois numeros: ");
scanf("%d %d", &x, &y);
if(x>y){
    maior = x;
    menor= y;
}else if (y>x){
    maior = y;
    menor= x;
}else{
    if(x%2!=0) {
    printf("%d ", x);
}else if(y%2!=0) {
        printf("%d ", x);
}
}

for( ; menor<=maior; menor++){
    if(menor%2!=0){
        printf("%d ", menor);
    }
}



    return 0;
}