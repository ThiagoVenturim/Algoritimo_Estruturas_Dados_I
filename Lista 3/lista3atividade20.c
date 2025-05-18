#include <stdio.h>
int main() {
int variavel, a, b;
printf("Digite a e b da eguação do primeiro grau ax+b=0: ");
scanf("%d %d", &a, &b);
if(a!=0){
variavel = -b/a;
printf("A raiz da esquacao : %d", variavel);
}else{ 
    printf(" 'a' tem que ser difente de  ");
}
return 0;
}