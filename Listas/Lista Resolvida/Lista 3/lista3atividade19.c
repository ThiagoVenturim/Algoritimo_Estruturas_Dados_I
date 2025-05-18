#include <stdio.h>
int main(){
char c1, c2;
printf("Digite dois caracteres: ");
scanf("%c %c", &c1, &c2);
if(c1 >c2){
printf("%c %c\n", c2, c1);

}else 
printf("%c %c\n", c1, c2);

    return 0;
}