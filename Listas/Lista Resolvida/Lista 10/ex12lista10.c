#include <stdio.h>
#define MAX 1000
int main(){
int mais = 0;
char str[MAX];
printf("Digite uma string: ");
fgets(str, MAX, stdin);
for(int i = 0; str[i] != '\0'; i++){
if(str[i] >= 65 && str[i] <= 90){
mais++;
}
}
printf("A string possui %d letras maiusculas\n", mais);
    return 0;
}