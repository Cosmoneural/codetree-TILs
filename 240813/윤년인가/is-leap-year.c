#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d",&a);
    if(a%4==0 && !(a%100==0 && a%400!=0)){
        printf("true");
    }else{
        printf("false");
    }
    return 0;
}