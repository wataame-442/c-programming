#include <stdio.h>

int main() {
    int score;
    printf("点数を入力してください\t");
    scanf("%d",&score);
    if(score>=80){
        printf("合格\n");
    }
else {
    printf("不合格\n");
}
    // scoreが80以上なら「合格」と表示しよう
    return 0;
}