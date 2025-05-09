//C言語の関数について
//特定の処理をまとめたプログラム

#include <stdio.h>

int add(int a,int b);      //関数のプロトタイプ宣言(gccが読み取るのに必要)
int add5(int a); 

int main(void){
    printf("%d\n",add(3,5));     //関数とは：関数に何かを与えると何かを返すもの
}

//main関数は、プログラム全体で最初に実行される関数
//自分で作った関数は、すべてmain関数で実行される

int add(int a,int b){      //プロトタイプ宣言の中身と一緒
    return a+b;
}

//関数にはreturnを書く

int add5(int a){
    a=a+5;
    return a;
}