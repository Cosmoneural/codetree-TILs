#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d",&a);
    if(a>=3000){
    printf("book");
    }else if(1000>=a){
    printf("mask");
    }else if(500>=a){
    printf("pen");
    }
    else{
    printf("no");
    }
    return 0;
}