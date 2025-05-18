#include <stdio.h>
#include <ctype.h>
#define MAX 10000

int main(){
char str[MAX];
char c;
printf("Digite uma string: ");
fgets(str, MAX, stdin);
for(int i = 0; str[i] != '\0'; i++){
    c= tolower(str[i]);  
    
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        printf("%c", c);
    }
}

    return 0;
}