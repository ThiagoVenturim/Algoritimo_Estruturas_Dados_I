#include <stdio.h>
#define MAX 1000
int main(){
int min = 0;
char str[MAX];
printf("Digite uma string: ");
fgets(str, MAX, stdin);
for(int i = 0; str[i] != '\0'; i++){
if(str[i] >= 97 && str[i] <= 122){
min++;
}
}
printf("A string possui %d letras minusculo \n", min);
    return 0;
}