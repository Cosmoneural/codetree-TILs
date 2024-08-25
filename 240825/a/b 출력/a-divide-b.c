#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d.",a/b);
    int c;
    c=a%b;
    c*=10;
    for(int i=0;i<20;i++){
        printf("%d",c/b);
        c*=10;
        c%=b;
    }
    return 0;
}

//for 로 1번, while로 1번하기