#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
int main(){
    char str[MAX];
    char strInverso[MAX];
    int cont=0, i=0, j=0;
    fgets(str, MAX, stdin); 
    for( ;  str[i]!= '\0'; i++){
        if(str[i]== 'a' || str[i]== 'A'){
        cont++;
        }
    }
    i--;
    printf(" %s", str);
    printf(" %d", cont);

    for(; j<=i; j++){
        strInverso[j]=str[i-j];
    }
strInverso[j]='\0';
    printf(" %s", strInverso);
    return 0;
}