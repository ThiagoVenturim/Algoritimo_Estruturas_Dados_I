#include <stdio.h>
int main (){
char car;
do{
    printf(" Digite caracteres:\n ");
    scanf("%c", &car);

if( car >= 65 && car  <= 90){
    printf("Maiuscula\n");

}else if (car >= 97 && car  <= 122){
    printf("Minuscula\n");

}else if (car > 48 && car  <= 57 ){
    printf("Digito\n");
}
}while(car!=0 );




    return 0;
}