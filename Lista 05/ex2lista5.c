#include <stdio.h>

int par (int n){
    return n*2;
}
void ParesEmOrdemDecrecente(int n){
    for ( int i= n; i>0  ; i-- ){
        int valor;
       valor= par(i);
        if (valor < n){
            printf("%d ", valor);
        }
    }
    return;
}
int main (){
    int num;
printf("Digite um numero interio: ");
scanf("%d", &num);
ParesEmOrdemDecrecente(num);

    return 0;
}