#include <stdio.h>
int nfibonacci(int n){
int primeiro =1, resultado = 0 , segundo=1;
    if ( 2==n || n== 1) {
        return 1; 
    }
    for (int i = 3; i <= n; i++) {
        resultado = primeiro + segundo; 
        primeiro = segundo;            
        segundo = resultado;             
    }
  return resultado;
}


int main(){
int num;
printf("Digite um numero: ");
scanf("%d", &num);
if(num>0){
    printf("%d", nfibonacci(num));
}else{
printf("Opercao invalida numero menor que 1");
}
return 0;
}