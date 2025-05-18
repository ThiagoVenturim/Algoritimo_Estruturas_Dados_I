#include <stdio.h>


int main (){
int qantidade ;
printf("Digite a quantidade: ");
scanf(" %d", &qantidade);
for(int i = 1; i<=qantidade; i++ ){
    
    for(int espa= 1; qantidade<(i/2); espa++ ){
    printf(" ");
    }

    for( int estrela= 1; estrela<=i; estrela++ ){
        printf("*");
    }

    printf(" \n");
}
    return 0;
}