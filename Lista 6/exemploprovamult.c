#include <stdio.h>

int mult (int num1, int num2){
if(num2>1){
    return num1 + mult(num1, num2-1);
}
return num1;
}
int main (){
int num1, num2, result;
printf("Enter two numbers: ");
scanf("%d %d", &num1, &num2);
result = mult(num1, num2);
printf("The product of %d and %d is %d\n", num1, num2, result);
return 0;
}
