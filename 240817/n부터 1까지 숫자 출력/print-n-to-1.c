#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d",&a);
    int i=a;
    while(i>=1){
        printf("%d ",i);
        i--; // 후위 연산자
        // --i; // 전위 연산자 <=======
    }
    return 0;
}