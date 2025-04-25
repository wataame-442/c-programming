#include <stdio.h>

int main() {
    int a, b;
    printf("足し算をします\n数字を入力してください\t");
    scanf("%d",&a);
    printf("二つ目の数字を入力してください\t");
    scanf("%d",&b);
    printf("%d+%d=%d\n",a,b,a+b);
    // 入力を受け取り、合計を出力しよう
    return 0;
}