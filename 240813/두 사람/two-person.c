#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a1,b1;
    char a2,b2;
    scanf("%d %d",&a1,&b1);
    scanf("%s %s",&a2,&b2);
    if((a1>=19 && a2=='M') || (b1>=19 && b2=='M')){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}