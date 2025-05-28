#include <stdio.h>
#include <stdlib.h>
#define MAX 100



int main(){
    char *str = (char *) malloc(100*sizeof(char));
    int i;
    if(str==NULL){
        printf("Erro ao alocar memoria!\n");
        return 1;
    }
    printf(" Digite susa str");
    fgets(str, MAX, stdin);

    for( i= 0; *(str+i)=='\0'; i++ ){
        printf(" %d", i);
    }
//invertido(str,  i);
return 0;
}