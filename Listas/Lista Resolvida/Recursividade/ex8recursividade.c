#include <stdio.h>
int func(int n){
if(n==0) retun 0;
else return n + func(n-1);
}
int main(){
int n; 
printf("Enter a number: "); 
scanf("%d", &n);
printf("Sum of first %d natural numbers is: %d\n", n, func(n));
return 0;


}