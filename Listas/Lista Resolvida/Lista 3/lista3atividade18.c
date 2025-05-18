
#include <stdio.h>
int main () {
int num;
printf("Digite um número: ");
scanf("%d", &num);
switch (num) {

    case 1:
        printf("Janeiro /n");
        break;

    case 2:
        printf("fevereiro /n");
        break;

    case 3:
        printf("marco /n");
        break; 

    case 4:
        printf("abril /n");
        break; 

    case 5:
        printf("maio /n");
        break; 

    case 6:
        printf("junho /n");
        break; 
        
    case 7:
        printf("julho /n");
        break; 

    case 8:
        printf("agosto /n");
        break;

     case 9:
        printf("setembro /n");
        break;

     case 10:
        printf("outrubro /n");
        break;

          
     case 11:
     printf("novembro /n");
     break;

       
     case 12:
        printf("dezembro /n");
 default:
        printf("Número inválido/n");
        break;
}


    return 0;
}