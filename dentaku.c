#include <stdio.h>

float dentaku(float a,float b,float c);

int main(void){
    float a,b,c;
    printf("モードを選択してください【1：足し算　2：引き算　3：掛け算】\n");
    scanf("%f",&c);
    printf("一つ目の値を入力してください\n");
    scanf("%f",&a);
    printf("二つ目の値を入力してください\n");
    scanf("%f",&b);
    printf ("答えは.%fです",dentaku(a,b,c));
    return 0;
}

float dentaku(float a,float b,float c){
    if(c==1){
    return a+b;
    }
    else if(c==2){
    return a-b;
    }
    else if(c==3){
    return a*b;
    }
}
