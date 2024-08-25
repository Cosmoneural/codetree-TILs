#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d.",a/b);
    int c;
    c=a%b;
    for(int i=0;i<20;i++){
        c*=10;
        printf("%d",c/b);
        
        c%=b;
    }
    return 0;
}

//for 로 1번, while로 1번하기