#include <stdio.h>

int main(){
char string[50];
printf("Digite a string: ");
scanf(" %s", string);
for(int i=0; i<4; i++){
printf(" %c\n", string[i]);
}
    return 0;
}