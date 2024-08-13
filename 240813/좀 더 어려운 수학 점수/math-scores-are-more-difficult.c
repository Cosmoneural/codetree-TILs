#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a1,a2,b1,b2;
    scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
    if(a1>b1){
        printf("A");
    }else if (b1>a1){
        printf("B");
    }
    return 0;
}