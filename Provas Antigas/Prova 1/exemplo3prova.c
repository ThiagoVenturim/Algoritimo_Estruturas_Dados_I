#include <stdio.h>
#include <math.h>

float n_esimo(int num, float x){
float resultado;
    if(num%2==0){
    resultado= -(pow(x,num))/(2*num);
}else
resultado= (pow(x,num))/(2*num);
return resultado;
}