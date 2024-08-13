#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(b<a && a>c){
        printf("%d",a);
    }else if(a<b && b>c){
        printf("%d",b);
    }else if(b<c && c>a){
        printf("%d",c);
    }
    return 0;
}