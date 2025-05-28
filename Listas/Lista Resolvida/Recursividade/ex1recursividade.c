#include <stdio.h>
#include <stdlib.h>
int atenum(int *vetor, int num, int i ){
if(num==0){
    return 0;
}else{
    *vetor = i;	
    printf("%d ", *vetor);
    return atenum(vetor + 1, num - 1, i + 1);
}

}
int main(){
    int num;
    int *vetor;
    printf("Digite um numero inteiro positvo: ");
    scanf("%d", &num);
    if (num <= 0) {
        printf("Numero invalido. Deve ser um inteiro positivo.\n");
        return 1;
    }
    vetor = (int *)malloc(num * sizeof(int));
    if(vetor == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }  
    atenum(vetor, num, 1);
    return 0;
}