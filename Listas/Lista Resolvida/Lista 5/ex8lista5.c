#include <stdio.h>

int fator (int n){
    int f = 1;          
    for (int i = n; i >= 1; i--) {  
        f *= i; 
    }            
return f;
}

int main (){
    int n; 
    printf("Digite n: ");
    scanf(" %d", &n);
    printf (" %d", fator(n));

    return 0;

}