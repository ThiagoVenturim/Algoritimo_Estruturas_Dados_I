#include <stdio.h>
#define MAX 1000
void my_strcat(char *dest, const char *src){
while (*dest != '\0') {
dest++;
}    
while (*src != '\0') {
*dest = *src;
src++;
dest++;
}
    return;
}
int main(){
char str1[MAX];
char str2[MAX];
printf("Digita uma string: ");
fgets(str1, MAX, stdin);
printf("Digite outra string: ");
fgets(str2, MAX, stdin);
my_strcat(str1, str2);
printf("A string concatenada e: %s", str1);
    return 0;
}