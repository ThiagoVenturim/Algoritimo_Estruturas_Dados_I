#include <stdio.h>
#include <stdlib.h>
    int main(){
    int *num ;
    char *car ;
    float *dou;
    int tamI, tamF, tamC ;
    printf(" Digite o tamanho de cada vetor na ordem int, float, char: ");
    scanf("%d %d %d", &tamI, &tamF, &tamC);
        
        num= ( int *) malloc( tamI* sizeof(int));
        car= ( char *) malloc( tamF* sizeof(char));
        dou= ( float *) malloc( tamC* sizeof(float)); 

    if(num != NULL && car != NULL && dou != NULL){    
        printf(" Digite o Numero ");
        for( int i=0; i<tamI; i++){
            scanf("%d", &(*(num+i)));
            printf(" Memoria int %p\n", (num+i));
        }
        printf(" Digite o Float ");
        for(int i=0; i<tamF; i++){
            scanf("%f", &(*(dou+i))); 
            printf(" Memoria float %p\n", (dou+i));
        }
        printf(" Digite o Char ");
        for(int i=0; i<tamC; i++){
            scanf(" %c", &(*(car+i))); 
            printf("Memoria char %p\n", (car+i)); 
        }
       
free(num);
free(car);
free(dou);
    }

    return 0;
}