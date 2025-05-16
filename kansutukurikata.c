#include <stdio.h>

float chohoukei(float x,float y);

int main(void){
    float a,b;
    a=0;
    b=0;
    scanf("%f",&a);
    scanf("%f",&b);
    printf("%f",chohoukei(a,b));
    return 0;
}

float chohoukei(float x,float y){
    return x*y;
}