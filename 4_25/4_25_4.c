#include <stdio.h>

int main() {
    int num;
    printf("奇数か偶数かを判定します\n数字を入力してください\t");
    scanf("%d",&num);
    if (num%2==0){
        printf("%dは偶数です\n",num);
    }
    else{
        printf("%dは奇数です\n",num);
    }
    // 奇数か偶数かを判定しよう
    return 0;
}