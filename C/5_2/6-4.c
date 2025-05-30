#include <stdio.h>

int main(){
    int i,n,s;
    i=1;
    s=0;
    scanf("%d",&n);
    for(i=2;i<=n;i+=2){
        s=s+i;
}
printf("%d\n",s);
return 0;
}