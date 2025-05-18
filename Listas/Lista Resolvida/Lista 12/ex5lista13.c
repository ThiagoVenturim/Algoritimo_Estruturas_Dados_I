#include <stdio.h>
#include <stdlib.h>

void preencher(int *vetor, int tamanho){
    int *p;
    printf("Digite os numeros do vetor: ");
    for(p=vetor; p<vetor+tamanho; p++){
       scanf(" %d", &(*p));  
    }
return; 
}
int procurar(int *vetor, int tamanho, int numero){
int procura=0;
    for(int i=0; i<tamanho; i++, vetor++){
        if(numero== *vetor){
            procura++;
        }
    } 
return procura;
}

int main(){
    int num, pro;
    int *ptr;
        printf("Digite o tamanho do vetor: ");
        scanf(" %d", &num);
        ptr = (int *) malloc(num* sizeof(int));
    if(ptr != 0){
        preencher(ptr, num);
        printf("Digite o numero a ser procurado: ");
        scanf(" %d", &pro);
        printf(" O numero %d aparece %d vezes", pro,  procurar(ptr, num, pro));   
free(ptr);
}
    return 0; 
}