#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((b>a && a>c) || (c>a && a>b)){
        printf("%d",a);
    }if((a>b && b>c) || (c>b && b>a)){
        printf("%d",b);
    }if((b>c && c>a)){
        printf("%d",c);
    }
    return 0;
}