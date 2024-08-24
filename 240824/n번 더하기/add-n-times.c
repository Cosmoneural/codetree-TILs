#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    int n=a+b;
    for(int i=n;i<=41;i+=b){
        printf("%d\n",i);
    }
    return 0;
}